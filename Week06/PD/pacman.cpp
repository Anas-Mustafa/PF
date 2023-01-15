#include <iostream>
#include <windows.h>
using namespace std;

void gotoPosition(int x, int y);
char getCharAtPosition(short int x, short int y);
void printChar(int x, int y, char character);
void erasePosition(int x, int y);
void printPacman(int x, int y);
void printGhost(int x, int y);
void printMaze();
void updateScore();
void updatePosition();
void handlePacman();
void handleGhost();
void handleGameExit();

int gameScore = 0;
int pacmanX = 29;
int pacmanY = 12;
int ghostOneX = 51;
int ghostOneY = 13;
int ghostOneOffset = -1;
char ghostOneLastPosition = ' ';
int ghostTwoX = 47;
int ghostTwoY = 18;
int ghostTwoOffset = -1;
char ghostTwoLastPosition = '.';
bool gameRunning = true;

int main() {
    system("cls");
    cout << "Score: " << gameScore << endl;
    cout << "X: " << pacmanX << " Y: " << pacmanY << endl;
    printMaze();
    printPacman(pacmanX, pacmanY);
    printGhost(ghostOneX, ghostOneY);
    while (gameRunning) {
        handlePacman();
        handleGhost();
        if (pacmanX == ghostOneX && pacmanY == ghostOneY || pacmanX == ghostTwoX && pacmanY == ghostTwoY) {
            printGhost(ghostTwoX, ghostTwoY);
            printGhost(ghostOneX, ghostOneY);
            handleGameExit();
        }
        Sleep(150);
    }
}

void printMaze() {
    cout << "######################################################################" << endl;
    cout << "||.. .....................................................  ......  ||" << endl;
    cout << "||.. %%%%%%%%%%%%%%%%        ...     %%%%%%%%%%%%%%  |%|..   %%%%   ||" << endl;
    cout << "||..        |%|   |%|     |%|...     |%|        |%|  |%|..    |%|   ||" << endl;
    cout << "||..        |%|   |%|     |%|...     |%|        |%|  |%|..    |%|   ||" << endl;
    cout << "||..        %%%%%%%%% . . |%|...     %%%%%%%%%%%%%%     ..  %%%%.   ||" << endl;
    cout << "||..       |%|        . . |%|...    ............... |%| ..      .   ||" << endl;
    cout << "||..       %%%%%%%%%%%. . |%|...    %%%%%%%%%%%%    |%| ..  %%%%.   ||" << endl;
    cout << "||..               |%|.             |%|......       |%| ..   |%|.   ||" << endl;
    cout << "||..     ......... |%|.             |%|......|%|        ..   |%|.   ||" << endl;
    cout << "||..|%|  |%|%%%|%|.|%|. |%|            ......|%|        ..|%||%|.   ||" << endl;
    cout << "||..|%|  |%|   |%|..    %%%%%%%%%%%%%  ......|%|         .|%|.      ||" << endl;
    cout << "||..|%|  |%|   |%|..           ...|%|     %%%%%%        . |%|.      ||" << endl;
    cout << "||..|%|            .           ...|%|               |%| ..|%|.      ||" << endl;
    cout << "||..|%|  %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%     |%| ..|%|%%%%%  ||" << endl;
    cout << "||...............................................   |%| ..........  ||" << endl;
    cout << "||   ............................................          .......  ||" << endl;
    cout << "||..|%|  |%|   |%|..   %%%%%%%%%%%%%  .......|%|    |%| ..|%|.      ||" << endl;
    cout << "||..|%|  |%|   |%|..          ...|%|      %%%%%%    |%| ..|%|.      ||" << endl;
    cout << "||..|%|            .          ...|%|                |%| ..|%|.      ||" << endl;
    cout << "||..|%|  %%%%%%%%%%%%%%       ...|%|%%%%%%%%%%%     |%| ..|%|%%%%%% ||" << endl;
    cout << "||...............................................   |%| ........... ||" << endl;
    cout << "||  .............................................       ........... ||" << endl;
    cout << "######################################################################" << endl;
}

void gotoPosition(int x, int y) {
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printChar(int x, int y, char character) {
    gotoPosition(x, y);
    cout << character;
}
void erasePosition(int x, int y) {
    printChar(x, y, ' ');
}

void printPacman(int x, int y) {
    printChar(x, y, 'P');
}

void printGhost(int x, int y) {
    printChar(x, y, 'G');
}

char getCharAtPosition(short int x, short int y) {
    CHAR_INFO ci;
    COORD xy = { 0, 0 };
    SMALL_RECT rect = { x, y, x, y };
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}

void updateScore() {
    gameScore++;
    gotoPosition(0, 0);
    cout << "Score: " << gameScore;
    if (gameScore == 473) {
        handleGameExit();
    }
}

void updatePosition() {
    gotoPosition(0, 1);
    cout << "                                             ";
    gotoPosition(0, 1);
    cout << "X: " << pacmanX << " Y: " << pacmanY;
}

void handlePacman() {
    if (GetAsyncKeyState(VK_LEFT)) {
        char nextLocation = getCharAtPosition(pacmanX - 1, pacmanY);
        if (nextLocation == ' ' || nextLocation == '.') {
            erasePosition(pacmanX, pacmanY);
            pacmanX = pacmanX - 1;
            printPacman(pacmanX, pacmanY);
            updatePosition();
            if (nextLocation == '.')
                updateScore();
        }
    } else if (GetAsyncKeyState(VK_RIGHT)) {
        char nextLocation = getCharAtPosition(pacmanX + 1, pacmanY);
        if (nextLocation == ' ' || nextLocation == '.') {
            erasePosition(pacmanX, pacmanY);
            pacmanX = pacmanX + 1;
            printPacman(pacmanX, pacmanY);
            updatePosition();
            if (nextLocation == '.')
                updateScore();
        }
    } else if (GetAsyncKeyState(VK_UP)) {
        char nextLocation = getCharAtPosition(pacmanX, pacmanY - 1);
        if (nextLocation == ' ' || nextLocation == '.') {
            erasePosition(pacmanX, pacmanY);
            pacmanY = pacmanY - 1;
            printPacman(pacmanX, pacmanY);
            updatePosition();
            if (nextLocation == '.')
                updateScore();
        }
    } else if (GetAsyncKeyState(VK_DOWN)) {
        char nextLocation = getCharAtPosition(pacmanX, pacmanY + 1);
        if (nextLocation == ' ' || nextLocation == '.') {
            erasePosition(pacmanX, pacmanY);
            pacmanY = pacmanY + 1;
            printPacman(pacmanX, pacmanY);
            updatePosition();
            if (nextLocation == '.')
                updateScore();
        }
    } else if (GetAsyncKeyState(VK_ESCAPE)) {
        handleGameExit();
    }
}

void handleGhost() {
    char nextLocation = getCharAtPosition(ghostOneX, ghostOneY + ghostOneOffset);
    if (nextLocation == '#') {
        ghostOneOffset *= -1;
        nextLocation = ghostOneLastPosition;
    }
    printChar(ghostOneX, ghostOneY, ghostOneLastPosition);
    ghostOneY += ghostOneOffset;
    ghostOneLastPosition = nextLocation;
    printGhost(ghostOneX, ghostOneY);

    nextLocation = getCharAtPosition(ghostTwoX + ghostTwoOffset, ghostTwoY);
    if (nextLocation == '|') {
        ghostTwoOffset *= -1;
        nextLocation = ghostTwoLastPosition;
    }
    printChar(ghostTwoX, ghostTwoY, ghostTwoLastPosition);
    ghostTwoX += ghostTwoOffset;
    ghostTwoLastPosition = nextLocation;
    printGhost(ghostTwoX, ghostTwoY);
}

void handleGameExit() {
    gotoPosition(0, 27);
    cout << "\t\t\t\t\tGame Over!" << endl;
    if (gameScore == 473) {
        cout << "\t\t\t\t\tYou Won!";
    } else {
        cout << "\t\t\t\t\tYou Lost!";
    }
    exit(0);
}
