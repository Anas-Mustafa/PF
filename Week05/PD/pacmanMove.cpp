#include <iostream>
#include <windows.h>
using namespace std;

void gotoPosition(int x, int y);
char getCharAtPosition(short int x, short int y);
void erasePosition(int x, int y);
void printPacman(int x, int y);
void printMaze();

int main() {
    int pacmanX = 4;
    int pacmanY = 4;
    bool gameRunning = true;
    
    system("cls");
    printMaze();
    printPacman(pacmanX, pacmanY);
    while(gameRunning) {
        if (GetAsyncKeyState(VK_LEFT)) {
            char nextLocation = getCharAtPosition(pacmanX - 1, pacmanY);
            if (nextLocation == ' ') {
                erasePosition(pacmanX, pacmanY);
                pacmanX = pacmanX - 1;
                printPacman(pacmanX, pacmanY);
            }
        }
        if (GetAsyncKeyState(VK_RIGHT)) {
            char nextLocation = getCharAtPosition(pacmanX + 1, pacmanY);
            if (nextLocation == ' ') {
                erasePosition(pacmanX, pacmanY);
                pacmanX = pacmanX + 1;
                printPacman(pacmanX, pacmanY);
            }
        }
        if (GetAsyncKeyState(VK_UP)) {
            char nextLocation = getCharAtPosition(pacmanX, pacmanY - 1);
            if (nextLocation == ' ') {
                erasePosition(pacmanX, pacmanY);
                pacmanY = pacmanY - 1;
                printPacman(pacmanX, pacmanY);
            }
        }
        if (GetAsyncKeyState(VK_DOWN)) {
            char nextLocation = getCharAtPosition(pacmanX, pacmanY + 1);
            if (nextLocation == ' ') {
                erasePosition(pacmanX, pacmanY);
                pacmanY = pacmanY + 1;
                printPacman(pacmanX, pacmanY);
            }
        }
        if (GetAsyncKeyState(VK_ESCAPE)) {
            gameRunning = false;
        }
        Sleep(200);
    }
}

void printMaze() {
    cout << "################" << endl;
    cout << "#              #" << endl;
    cout << "#              #" << endl;
    cout << "#              #" << endl;
    cout << "#              #" << endl;
    cout << "#              #" << endl;
    cout << "#              #" << endl;
    cout << "#              #" << endl;
    cout << "#              #" << endl;
    cout << "#              #" << endl;
    cout << "#              #" << endl;
    cout << "#              #" << endl;
    cout << "################" << endl;
}

void gotoPosition(int x, int y) {
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void erasePosition(int x, int y) {
    gotoPosition(x, y);
    cout << " ";
}

void printPacman(int x, int y) {
    gotoPosition(x, y);
    cout << "P";
}

char getCharAtPosition(short int x, short int y) {
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}