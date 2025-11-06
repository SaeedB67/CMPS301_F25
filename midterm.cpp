#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "****** Welcome to the Tech Store Invoice Calculator ******" << endl;

    string customerName;
    cout << "Enter customer name: ";
    cin >> customerName;

    int numberOfItems;
    cout << "Enter number of items: ";
    cin >> numberOfItems;

    double itemPrice;
    cout << "Enter price per item: ";
    cin >> itemPrice;

    char storeMember;
    cout << "Are you a store member (Y/N)? ";
    cin >> storeMember;

    double subtotal = numberOfItems * itemPrice;
    double discountPercent = 0.0;
    double memberDiscountPercent = 0.0;

    if (subtotal > 500)
        discountPercent = 0.10;
    else if (subtotal > 300)
        discountPercent = 0.05;
    
    if (storeMember == 'Y' || storeMember == 'y')
        memberDiscountPercent = 0.05;

    double totalDiscount = subtotal * (discountPercent + memberDiscountPercent);
    double finalTotal = subtotal - totalDiscount;

    cout << fixed << showpoint << setprecision(2);

    cout << "\n============== PURCHASE INVOICE ==============\n";
    cout << left << setw(20) << "Customer Name:" << right << setw(10) << customerName << endl;
    cout << left << setw(20) << "Items Purchased:" << right << setw(10) << numberOfItems << endl;
    cout << left << setw(20) << "Price per Item:" << right << setw(5) << "$" << itemPrice << endl;
    cout << left << setw(20) << "Subtotal:" << right << setw(8) << "$" << subtotal << endl;

    cout << "\nDiscount Applied:" << setw(10) << " " << (discountPercent * 100) << "%" << endl;
    cout << "Membership Discount:" << setw(5) << " " << (memberDiscountPercent * 100) << "%" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "Final Total:" << setw(10) << " $" << finalTotal << endl;
    cout << "=============================================" << endl;
    cout << "Thank you for shopping with us!" << endl;

    return 0;
}
