#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
void printMaze();
void playerMove(int x, int y);

int main() {
    system("cls");
    printMaze();
    int x = 2;
    int y = 4;

    while(true) {
        if (x < 26) {
            playerMove(x, y);
            x++;
        }
        if (x == 26) {
            gotoxy(x - 1, y);
            cout << " ";
            x = 2;
        }
    }

    return 0;
}

void playerMove(int x, int y) {
    gotoxy(x - 1, y);
    cout << " ";
    gotoxy(x, y);
    cout << "P";
    Sleep(200);
    
}

void printMaze() {
    cout << "###########################" << endl;
    cout << "#                         #" << endl;
    cout << "#                         #" << endl;
    cout << "#                         #" << endl;
    cout << "#                         #" << endl;
    cout << "#                         #" << endl;
    cout << "#                         #" << endl;
    cout << "#                         #" << endl;
    cout << "#                         #" << endl;
    cout << "#                         #" << endl;
    cout << "###########################" << endl;
}

void gotoxy(int x, int y) {
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


