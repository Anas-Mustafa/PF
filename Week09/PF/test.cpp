#include <iostream>
using namespace std;

int main()
{
    int arraySize;
    cout << "Enter the Number of Students: ";
    cin >> arraySize;

    float cgpa[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        cout << "CGPA of Student at index " << i << ": ";
        cin >> cgpa[i];
    }

    for (int i = 0; i < arraySize; i++)
    {
        cout << "CGPA of Student at index " << i << " is " << cgpa[i] << endl;
    }
    return 0;
}