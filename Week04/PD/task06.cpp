#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
void printA(int x, int y);
void printS(int x, int y);
void printW(int x, int y);
void printI(int x, int y);

int main() {
    system("cls");
    printA(50, 1);
    printW(50, 8);
    printA(50, 15);
    printI(50, 22);
    printS(50, 29);
}

void gotoxy(int x, int y) {
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printA(int x, int y) {
    gotoxy(x, y);
    cout << "  ##   ";
    gotoxy(x, y + 1);
    cout << " ## ## ";
    gotoxy(x, y + 2);
    cout << "#######";
    gotoxy(x, y + 3);
    cout << "##   ##";
    gotoxy(x, y + 4);
    cout << "##   ##";
    gotoxy(x, y + 5);
    cout << "##   ##";
}

void printS(int x, int y) {
    gotoxy(x, y);
    cout << "#######";
    gotoxy(x, y + 1);
    cout << "#      ";
    gotoxy(x, y + 2);
    cout << "#######";
    gotoxy(x, y + 3);
    cout << "      #";
    gotoxy(x, y + 4);
    cout << "      #";
    gotoxy(x, y + 5);
    cout << "#######";
}

void printW(int x, int y) {
    gotoxy(x, y);
    cout << "#     #";
    gotoxy(x, y + 1);
    cout << "#     #";
    gotoxy(x, y + 2);
    cout << "#  #  #";
    gotoxy(x, y + 3);
    cout << "# # # #";
    gotoxy(x, y + 4);
    cout << "##   ##";
    gotoxy(x, y + 5);
    cout << "#     #";
}

void printI(int x, int y) {
    gotoxy(x, y);
    cout << "#######";
    gotoxy(x, y + 1);
    cout << "   #   ";
    gotoxy(x, y + 2);
    cout << "   #   ";
    gotoxy(x, y + 3);
    cout << "   #   ";
    gotoxy(x, y + 4);
    cout << "   #   ";
    gotoxy(x, y + 5);
    cout << "#######";
}