#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    cout << "============ CAR RENTAL INVOICE ============" << endl;

    int rentalDays;
    cout << "Number of rental days: ";
    cin >> rentalDays;

    double dailyRentalRate;
    cout << "Daily Rental Rate ($): ";
    cin >> dailyRentalRate;

    double insurancePerDay;
    cout << "Insurance per day ($): ";
    cin >> insurancePerDay;
	cout << "-------------------------------------------" << endl;
    int mileageAllowance;
    cout << "Mileage Allowance per day: ";
    cin >> mileageAllowance;

    double milesDriven;
    cout << "Total miles driven: ";
    cin >> milesDriven;

    double overMileageChargePerMile;
    cout << "Over Mileage Charge per mile ($): ";
    cin >> overMileageChargePerMile;

    double baseCost = rentalDays * dailyRentalRate;
    double insuranceCost = rentalDays * insurancePerDay;
    double mileageLimit = rentalDays * mileageAllowance;
    double excessMiles = max(0.0, milesDriven - mileageLimit);
    double overageFee = excessMiles * overMileageChargePerMile;
    double totalCost = baseCost + insuranceCost + overageFee;

    cout << fixed << showpoint << setprecision(2);
    cout << "-------------------------------------------" << endl;
    cout << setw(30) << left << "Base Rental Cost:" << "$" << setw(10) << right << baseCost << endl;
    cout << setw(30) << left << "Insurance Cost:" << "$" << setw(10) << right << insuranceCost << endl;
    cout << setw(30) << left << "Overage Fee:" << "$" << setw(10) << right << overageFee << endl;
    cout << "-------------------------------------------" << endl;
    cout << setw(30) << left << "Total Cost:" << "$" << setw(10) << right << totalCost << endl;
    cout << "===========================================" << endl;
	cout << "Thank you for choosing our car rental service!" << endl;
    return 0;
}
