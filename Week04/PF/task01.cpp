#include <iostream>
using namespace std;

void showResults(int marks);

int main() {
    int marks;
    
    while (true) {
        cout << "Enter your marks: ";
        cin >> marks;
        showResults(marks);
    }
    
    return 0;
}

void showResults(int marks) {
    if (marks > 50) {
        cout << "You Passed!" << endl;
    }
    if (marks < 50) {
        cout << "You Failed!" << endl;
    }
    if (marks == 50) {
        cout << "Beta Mehnaat Karo. Takreeban Fail Ho." << endl;
    }
}