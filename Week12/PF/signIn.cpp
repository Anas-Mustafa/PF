#include <iostream>
#include <fstream>
#include <iomanip>
#include <conio.h>

using namespace std;

string usernames[20];
string passwords[20];
int usersCount = 0;

void signUp(string username, string password);
void storeToFile(string username, string password);
void viewUsers();
bool signIn(string username, string password);
bool validateUsername(string username);
void loadUsers();
char mainScreen();

int main() {
    loadUsers();
    string username, password;
    char choice = 'o';
    while (choice != '4') {
        choice = mainScreen();
        if (choice == '1') {
            cout << "Enter Username: ";
            cin >> username;
            cout << "Enter Password: ";
            cin >> password;
            if (validateUsername(username)) {
                signUp(username, password);
                storeToFile(username, password);
                cout << "Login Sucessful" << endl;
            } else {
                cout << "User Name Already Exists" << endl;
            }
            cout << "Press any key to continue..." << endl;
            getch();
        } else if (choice == '2') {
            cout << "Enter Username: ";
            cin >> username;
            cout << "Enter Password: ";
            cin >> password;
            if (signIn(username, password)) {
                cout << "Login Sucessful";
            } else {
                cout << "Login Failed";
            }
            cout << "Press any key to continue..." << endl;
            getch();
        } else if (choice == '3') {
            viewUsers();
        }
    }

}

void signUp(string username, string password) {
    usernames[usersCount] = username;
    passwords[usersCount] = password;
    usersCount++;
}

void storeToFile(string username, string password) {
    fstream file;
    file.open("users.txt", ios::app);
    file << username << endl << password << endl;
    file.close();
}

void viewUsers() {
    cout << left << setw(15) << "Usernames" << setw(15) << "Passwords" << endl;
    for (int i = 0; i < usersCount; i++) {
        cout << left << setw(15) << usernames[i] << setw(15) << passwords[i] << endl;
    }
}

bool signIn(string username, string password) {
    for (int i = 0; i < usersCount; i++) {
        if (usernames[i] == username && passwords[i] == password) {
            return true;
        }
        return false;
    }
}

bool validateUsername(string username) {
    for (int i = 0; i < usersCount; i++) {
        if (username == usernames[i]) {
            return false;
        }
    }
    return true;
}

char mainScreen() {
    cout << "01. Sign Up" << endl;
    cout << "02. Sign In" << endl;
    cout << "03. View Users" << endl;
    cout << "04. Exit" << endl;
    cout << "Enter Choice: " << endl;
    return getch();
}

void loadUsers() {
    fstream file;
    string username, password;
    file.open("users.txt", ios::in);
    while (getline(file, username) && getline(file, password)) {
        usernames[usersCount] = username;
        passwords[usersCount] = password;
        usersCount++;
    }
    file.close();
}