#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "****** Welcome to the Grade Analyzer ******" << endl;

    string studentName;
    cout << "Enter student name: ";
    cin >> studentName;

    double score1;
    double score2;
    double score3;
    cout << "Enter score for Assignment 1: ";
    cin >> score1;
    cout << "Enter score for Assignment 2: ";
    cin >> score2;
    cout << "Enter score for Assignment 3: ";
    cin >> score3;

    double finalAverage = (score1 + score2 + score3) / 3.0;
    string letterGrade;

    if (finalAverage >= 97)
        letterGrade = "A+";
    else if (finalAverage >= 93)
        letterGrade = "A";
    else if (finalAverage >= 90)
        letterGrade = "A-";
    else if (finalAverage >= 87)
        letterGrade = "B+";
    else if (finalAverage >= 83)
        letterGrade = "B";
    else if (finalAverage >= 80)
        letterGrade = "B-";
    else if (finalAverage >= 77)
        letterGrade = "C+";
    else if (finalAverage >= 73)
        letterGrade = "C";
    else if (finalAverage >= 70)
        letterGrade = "C-";
    else if (finalAverage >= 60)
        letterGrade = "D";
    else
        letterGrade = "F";

    cout << fixed << showpoint << setprecision(2) << setfill('.') << endl;
    cout << "\n============== FINAL GRADE REPORT ==============\n";
    cout << left << setw(30) << "Student Name:" << right << studentName << endl;
    cout << left << setw(30) << "Assignment 1:" << right << score1 << endl;
    cout << left << setw(30) << "Assignment 2:" << right << score2 << endl;
    cout << left << setw(30) << "Assignment 3:" << right << score3 << endl;
    cout << "---------------------------------------------" << endl;
    cout << left << setw(30) << "Final Average:" << right << finalAverage << endl;
    cout << left << setw(30) << "Final Grade:" << right << letterGrade << endl;
    cout << "=============================================" << endl;
    cout << "Keep up the great work!" << endl;

    return 0;
}
