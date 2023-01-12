#include <iostream>
using namespace std;

char getGrade(int marks);

int main() {
    int marks;
    cout << "Enter Marks: ";
    cin >> marks;
    
    char grade = getGrade(marks);
    cout << "Grade: " << grade << endl;

    return 0;
}

char getGrade(int marks) {
    char grade;
    if (marks > 85)
        grade = 'A';
    else if (marks > 80)
        grade = 'B';
    else if (marks > 70)
        grade = 'C';
    else if (marks > 60)
        grade = 'D';
    else if (marks >= 50)
        grade = 'E';
    else 
        grade = 'F';

    return grade;
}
