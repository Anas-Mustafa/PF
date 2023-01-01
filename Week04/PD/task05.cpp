#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);

int main() {
    system("cls");
    gotoxy(35, 1);
    cout << "   ##     ##      #    ##     ######";
    gotoxy(35, 2);
    cout << "  ## ##   ####    #   ## ##   #     ";
    gotoxy(35, 3);
    cout << " #######  ## ##   #  #######  ######";
    gotoxy(35, 4);
    cout << " ##   ##  ##  ##  #  ##   ##       #";
    gotoxy(35, 5);
    cout << " ##   ##  ##   ## #  ##   ##       #";
    gotoxy(35, 6);
    cout << " ##   ##  ##    ###  ##   ##  ######";

    return 0;
}

void gotoxy(int x, int y) {
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}