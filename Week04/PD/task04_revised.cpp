#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
void printMaze();
void playerMove(int x, int y, int increment);

int main() {
    system("cls");
    printMaze();
    int x = 2;
    int y = 4;
    int increment = 1;

    while(true) {
        if (x == 2) {
            increment = 1;
        }
        if (x == 24) {
            increment = -1;
        }
        playerMove(x, y, increment);
        x = x + increment;
         
    }

    return 0;
}

void playerMove(int x, int y, int increment) {
    gotoxy(x - increment, y);
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


