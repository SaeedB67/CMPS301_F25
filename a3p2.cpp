#include <iostream>
#include <iomanip>
using namespace std;

    int main(){
        cout << "****** Welcome to the Monthly Budget & Savings Planner ******" << endl;

        double income;
            double rent;
            double utilities;
            double groceries;
            double transportation;
        double savingsPercent;
        cout << "Enter your monthly income ($): ";
        cin >> income;
        cout << "Enter your rent or mortgage cost ($): ";
        cin >> rent;
        cout << "Enter your utilities cost ($): ";
        cin >> utilities;
        cout << "Enter your groceries cost ($): ";
        cin >> groceries;
        cout << "Enter your transportation cost ($): ";
        cin >> transportation;
        cout << "Enter your desired savings goal (% of income): ";
        cin >> savingsPercent;

        double totalExpenses = rent + utilities + groceries + transportation;
        double savingsGoal = (savingsPercent / 100) * income;
        double remainingBalance = income - totalExpenses - savingsGoal;

        cout << fixed << setprecision(2) << showpoint;
        cout << "================= MONTHLY BUDGET REPORT =================" << endl;
        cout << left << setw(30) << setfill('.') << "Monthly Income:" << "$" << income << endl;
        cout << "--------------------------------------------------------" << endl;
        cout << left << setw(30) << setfill('.') << "Rent / Mortgage:" << "$" << rent << endl;
        cout << left << setw(30) << setfill('.') << "Utilities:" << "$" << utilities << endl;
        cout << left << setw(30) << setfill('.') << "Groceries:" << "$" << groceries << endl;
        cout << left << setw(30) << setfill('.') << "Transportation:" << "$" << transportation << endl;
        cout << "--------------------------------------------------------" << endl;
        cout << left << setw(30) << setfill('.') << "Total Expenses:" << "$" << totalExpenses << endl;
        cout << "Savings Goal (" << savingsPercent << "%): " << right << setw(10) << "$" << savingsGoal << endl;
        cout << left << setw(30) << setfill('.') << "Remaining Balance:" << "$" << remainingBalance << endl;
        cout << "========================================================" << endl;
        cout << "Smart planning leads to financial freedom!" << endl;
        return 0;
    }