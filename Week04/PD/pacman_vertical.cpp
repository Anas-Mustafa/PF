#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
void printMaze();
void displayPlayer(int x, int y);
void removeLastPosition(int x, int y);

int main() {
    system("cls");
    printMaze();
    int x = 3;
    int y = 21;
    while(true) {
        if (y == 0) {
            removeLastPosition(x, y + 1);
            y = 21;
        }
        displayPlayer(x, y);
        y--;
        Sleep(400);
    }
}

void gotoxy(int x, int y) {
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printMaze() {
    cout<< "######################################################################" <<endl;
    cout<< "||.. .....................................................  ......  ||" <<endl;
    cout<< "||.. %%%%%%%%%%%%%%%%        ...     %%%%%%%%%%%%%%  |%|..   %%%%   ||" <<endl;
    cout<< "||..        |%|   |%|     |%|...     |%|        |%|  |%|..    |%|   ||" <<endl;
    cout<< "||..        |%|   |%|     |%|...     |%|        |%|  |%|..    |%|   ||" <<endl;
    cout<< "||..        %%%%%%%%% . . |%|...     %%%%%%%%%%%%%%     ..  %%%%.   ||" <<endl;
    cout<< "||..       |%|        . . |%|...    ............... |%| ..      .   ||" <<endl;
    cout<< "||..       %%%%%%%%%%%. . |%|...    %%%%%%%%%%%%    |%| ..  %%%%.   ||" <<endl;
    cout<< "||..               |%|.             |%|......       |%| ..   |%|.   ||" <<endl;
    cout<< "||..     ......... |%|.             |%|......|%|        ..   |%|.   ||" <<endl;
    cout<< "||..|%|  |%|%%%|%|.|%|. |%|            ......|%|        ..|%||%|.   ||" <<endl;
    cout<< "||..|%|  |%|   |%|..    %%%%%%%%%%%%%  ......|%|         .|%|.      ||" <<endl;
    cout<< "||..|%|  |%|   |%|..           ...|%|     %%%%%%        . |%|.      ||" <<endl;
    cout<< "||..|%|            .           ...|%|               |%| ..|%|.      ||" <<endl;
    cout<< "||..|%|  %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%     |%| ..|%|%%%%%  ||" <<endl;
    cout<< "||...............................................   |%| ..........  ||" <<endl;
    cout<< "||   ............................................          .......  ||" <<endl;
    cout<< "||..|%|  |%|   |%|..   %%%%%%%%%%%%%  .......|%|    |%| ..|%|.      ||" <<endl;
    cout<< "||..|%|  |%|   |%|..          ...|%|      %%%%%%    |%| ..|%|.      ||" <<endl;
    cout<< "||..|%|            .          ...|%|                |%| ..|%|.      ||" <<endl;
    cout<< "||..|%|  %%%%%%%%%%%%%%       ...|%|%%%%%%%%%%%     |%| ..|%|%%%%%% ||" <<endl;
    cout<< "||...............................................   |%| ........... ||" <<endl;
    cout<< "||  .............................................       ........... ||" <<endl;
    cout<< "######################################################################" <<endl;
}

void displayPlayer(int x, int y) {
    removeLastPosition(x, y + 1);
    gotoxy(x, y);
    cout << "P";
}

void removeLastPosition(int x, int y) {
    gotoxy(x, y);
    cout << " ";
}