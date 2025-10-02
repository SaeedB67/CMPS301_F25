#include <iostream>
using namespace std;

int main() {
	cout << "================= MONTHLY BUDGET BREAKDOWN ================" << endl;
	cout << "Paycheck Recieved: $67,000.67" << endl;
	cout << "------------------- EXPENSES THIS MONTH -----------------" << endl;
	double rent = 2200.00;
	cout << "Rent: $" << rent << endl;
	double groceries = 450.50;
	cout << "Groceries: $" << groceries << endl;
	double utilities = 150.75;
	cout << "Utilities: $" << utilities << endl;
	double phoneBill = 80.00;
	cout << "Phone Bill: $" << phoneBill << endl;
	double carPayment = 300.00;
	cout << "Car Payment: $" << carPayment << endl;
	double streamingServices = 60.00;
	cout << "Streaming Services: $" << streamingServices << endl;
	double gas = 100.00;
	cout << "Gas: $" << gas << endl;
	double gymMembership = 40.00;
	cout << "Gym Membership: $" << gymMembership << endl;
	double totalExpenses;
	double remainingBalance;
	totalExpenses = rent + groceries + utilities + phoneBill + carPayment + streamingServices + gas + gymMembership;
	remainingBalance = 67000.67 - totalExpenses;
	cout << "Remaining Balance: $" << remainingBalance << endl;
	cout << "------------------- SAVINGS & DISCRETIONARY -----------------" << endl; 
	cout << "Total Expenses: $" << totalExpenses << endl;
	cout << "Remaining Balance: $" << remainingBalance << endl;
	cout << "You decided to save 20% of your what's left:" << endl;
	double amountSaved = remainingBalance * 0.20;
	cout << "Amount Saved: $" << amountSaved << endl;
	double moneyLeft = remainingBalance - amountSaved;
	cout << "Money Left After Savings: $" << moneyLeft << endl;
	cout << "================================================" << endl;
	cout << "Always keep track of your money; future you will thank you!" << endl;
}