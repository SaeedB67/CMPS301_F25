#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "****** Welcome to the College Admission Checker ******" << endl;

    string studentName;
    cout << "Enter student name: ";
    cin >> studentName;

    double gpa;
    cout << "Enter GPA (0.0 - 4.0): ";
    cin >> gpa;

    int satScore;
    cout << "Enter SAT score (out of 1600): ";
    cin >> satScore;

    char extracurricular;
    cout << "Participated in extracurricular activities (Y/N)? ";
    cin >> extracurricular;

    cout << fixed << setprecision(2) << setfill('.') << endl;

    bool admitted = false;
    string reason;

    if (gpa >= 3.5 && satScore >= 1200) {
        admitted = true;
        reason = "Strong academic performance (high GPA and SAT).";
    }
    else if (gpa >= 3.0 && satScore >= 1000 && (extracurricular == 'Y' || extracurricular == 'y')) {
        admitted = true;
        reason = "Good academics plus extracurricular involvement.";
    }
    else {
        admitted = false;
        reason = "Did not meet GPA/SAT/extracurricular requirements.";
    }

    cout << "\n============== ADMISSION RESULT ==============\n";
    cout << left << setw(30) << "Student Name" << right << studentName << endl;
    cout << left << setw(30) << "GPA" << right << gpa << endl;
    cout << left << setw(30) << "SAT Score" << right << satScore << endl;
    cout << left << setw(30) << "Extracurriculars"
        << right << ((extracurricular == 'Y' || extracurricular == 'y') ? "Yes" : "No") << endl;
    cout << "---------------------------------------------" << endl;
    cout << left << setw(30) << "Admission Decision"
        << right << (admitted ? "Accepted" : "Rejected") << endl;
    cout << left << setw(30) << "Reason" << right << reason << endl;
    cout << "=============================================" << endl;
    cout << "Thank you for applying, " << studentName << "!" << endl;
    return 0;
}