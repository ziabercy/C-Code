// Zia Bercy
// Purpose: using structs to store student info
// Input: student info from user
// Output: Student data


#include <iostream>
#include <string>
using namespace std;

// Defining tj\he Student structure
struct Student {
    string name;
    string description;
    string studentName;
    int IDNum;
    float Test1;
    float Test2;
    float Average;
    char CourseGrade;
};

// Defining the function to calculate the course grade based on the average test score
char calculateGrade(float average) {
    if (average >= 91) {
        return 'A';
    } else if (average >= 81) {
        return 'B';
    } else if (average >= 71) {
        return 'C';
    } else if (average >= 61) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    // Allocating an array of 5 Student structures
    Student students[5];

    // Asking for the ID number and test scores for each student, and calculating the average and grade
    for (int i = 0; i < 5; i++) {
        cout << "Enter data for student " << i+1 << ":" << endl;
        cout << "Name: ";
        getline(cin, students[i].name);
        cout << "Description: ";
        getline(cin, students[i].description);
        cout << "Student Name: ";
        getline(cin, students[i].studentName);
        cout << "ID Number: ";
        cin >> students[i].IDNum;
        while (students[i].IDNum < 0) {
            cout << "Invalid ID number. Please enter a non-negative integer: ";
            cin >> students[i].IDNum;
        }
        cout << "Test 1: ";
        cin >> students[i].Test1;
        cout << "Test 2: ";
        cin >> students[i].Test2;
        students[i].Average = (students[i].Test1 + students[i].Test2) / 2.0;
        students[i].CourseGrade = calculateGrade(students[i].Average);
        cin.ignore(); // consume the newline character after the last input
        cout << endl;
    }

    // Displaying a table of the student data
    cout << "Name\tID Number\tAverage Test Score\tCourse Grade" << endl;
    for (int i = 0; i < 5; i++) {
        cout << students[i].name << "\t" << students[i].IDNum << "\t\t";
        cout << students[i].Average << "\t\t" << students[i].CourseGrade << endl;
    }

    return 0;
}