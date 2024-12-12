#include <iostream>
using namespace std;

int main() {
    string name;
    int marks[5];
    float total = 0, average;


    cout << "Enter the student's name: ";
    cin >>name;

    cout << "Enter marks for 5 subjects:\n ";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
        total += marks[i];
    }

    average = total / 5;

    cout << "\nStudent: " << name << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;

    if (average >= 90)
        cout << "Grade: A" << endl;
    else if (average >= 80)
        cout << "Grade: B" << endl;
    else if (average >= 70)
        cout << "Grade: C" << endl;
    else
        cout << "Grade: F" << endl;

    return 0;

}