#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
void printMaze();
void patrolMove(int x, int y);

int main() {
    system("cls");
    printMaze();
    int x = 14;
    int y = 2;

    while(true) {
        if (y < 10) {
            patrolMove(x, y);
            y++;
        }
        if (y == 10) {
            gotoxy(x, y - 1);
            cout << " ";
            y = 2;
        }
    }

    return 0;
}

void patrolMove(int x, int y) {
    gotoxy(x, y - 1);
    cout << " ";
    gotoxy(x, y);
    cout << "C";
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


