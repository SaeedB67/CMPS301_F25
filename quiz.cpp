#include <iostream>
#include <iomanip>
using namespace std;
int main() {

	int smallCoffeesOrdered;
	cout << "Enter number of small coffees: ";
	cin >> smallCoffeesOrdered;

	int mediumCoffeesOrdered;
	cout << "Enter number of medium coffees: ";
	cin >> mediumCoffeesOrdered;

	int largeCoffeesOrdered;
	cout << "Enter number of large coffees: ";
	cin >> largeCoffeesOrdered;

	double taxRate;
	cout << "Enter tax rate (%): ";
	cin >> taxRate;
	cout << "================= COFFEE ORDER RECEIPT =================" << endl;

	double totalSmallCoffeesOrdered = smallCoffeesOrdered * 2.25;
	cout << "Small Coffees Ordered (" << smallCoffeesOrdered << " x " << "$2.25): $" << totalSmallCoffeesOrdered << endl;
	double totalMediumCoffeesOrdered = mediumCoffeesOrdered * 3.00;
	cout << "Medium Coffees Ordered (" << mediumCoffeesOrdered << " x " << "$3.00): $" << totalMediumCoffeesOrdered << endl;
	double totalLargeCoffeesOrdered = largeCoffeesOrdered * 3.75;
	cout << "Large Coffees Ordered (" << largeCoffeesOrdered << " x " << "$3.75): $" << totalLargeCoffeesOrdered << endl;

	double subtotal = totalSmallCoffeesOrdered + totalMediumCoffeesOrdered + totalLargeCoffeesOrdered;
	double tax = subtotal * (taxRate / 100);
	double total = subtotal + tax;

	cout << fixed << setprecision(2) << showpoint;
	cout << "--------------------------------------------------------" << endl;
	cout << left << setw(30) << setfill('.') << "Subtotal:" << "$" << subtotal << endl;
	cout << "Tax (" << fixed << setprecision(2) << taxRate << "%): " << right << setw(10) << "$" << tax << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << left << setw(30) << setfill('.') << "Total Amount Due:" << "$" << total << endl;
	cout << "========================================================" << endl;
	cout << "Thank you for supporting our local coffee shop!" << endl;
	return 0;
}
