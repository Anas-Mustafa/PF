#include <iostream>
using namespace std;

void isEligible(int age);

int main() {
    int age;

    while (true) {
        cout << "Enter Your Age: ";
        cin >> age;
        isEligible(age);
    }

    return 0;
}

void isEligible(int age) {
    if (age >= 18) {
        cout << "You are Eligible to Vote" << endl;
    }
    if (age < 18) {
        cout << "You are not Eligible to Vote" << endl;
    }
}
