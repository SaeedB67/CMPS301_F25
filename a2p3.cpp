#include <iostream>
using namespace std;


int main() {
	string name;
	string name2;
	string name3;
	double hoursWorked;
	double hoursWorked2;
	double hoursWorked3;
	double hourlyRate;
	double hourlyRate2;
	double hourlyRate3;
	cout << " ****** Welcome to the Freelance Invoice Generator ******" << endl;
	cout << "Enter Client Information: ";
	cin >> name;
	cout << "Enter hours worked: ";
	cin >> hoursWorked;
	cout << "Enter hourly rate: ";
	cin >> hourlyRate;
	cout << "\n" << endl;
	cout << "Enter Client Information: ";
	cin >> name2;
	cout << "Enter hours worked: ";
	cin >> hoursWorked2;
	cout << "Enter hourly rate: ";
	cin >> hourlyRate2;
	cout << "\n";
	cout << "Enter Client Information: ";
	cin >> name3;
	cout << "Enter hours worked: " ;
	cin >> hoursWorked3;
	cout << "Enter hourly rate: ";
	cin >> hourlyRate3;
	cout << "\n" << endl;
	double total1 = hoursWorked * hourlyRate;
	double total2 = hoursWorked2 * hourlyRate2;
	double total3 = hoursWorked3 * hourlyRate3;
	cout << "============== FREELANCER INVOICE ==============" << endl;
	cout << name << " " << hoursWorked << " Hours" << " @ " << hourlyRate << "/hr" << " = $" << total1 << endl;
	cout << name2 << " " << hoursWorked2 << " Hours" << " @ " << hourlyRate2 << "/hr" << " = $" << total2 << endl;
	cout << name3 << " " << hoursWorked3 << " Hours" << " @ " << hourlyRate3 << "/hr" << " = $" << total3 << endl;
	cout << "-----------------------------------------------" << endl;
	cout << "Total Income: " << " = $" << total1 + total2 + total3 << endl;
	cout << "===============================================" << endl;
	cout << "Keep on grinding!" << endl;
	return 0;
}