#include <iostream>
#include <cmath>
using namespace std;

int main() {

    char again = 'Y';

    cout << "Welcome to the Basic Math Calculator!\n";

    while (again == 'Y' || again == 'y') {

        string op;
        double a;
        double b;

        cout << "\nEnter the operator you want to use (+, -, *, /, %, ^, sin, asin, cos, acos, tan, atan, atan2, sqrt, ceil, abs, floor, max, min, log, log10, log2, round): ";
        cin >> op;

        if (op == "+" || op == "-" || op == "*" || op == "/" || op == "%" ||
            op == "^" || op == "max" || op == "min" || op == "atan2") {

            cout << "Enter first number: ";
            cin >> a;
            cout << "Enter second number: ";
            cin >> b;

            if (op == "+")
                cout << "Result: " << a + b << endl;

            else if (op == "-")
                cout << "Result: " << a - b << endl;

            else if (op == "*")
                cout << "Result: " << a * b << endl;

            else if (op == "/")
                cout << "Result: " << a / b << endl;

            else if (op == "%")
                cout << "Result: " << (int)a % (int)b << endl;

            else if (op == "^")
                cout << "Result: " << pow(a, b) << endl;

            else if (op == "max")
                cout << "Result: " << fmax(a, b) << endl;

            else if (op == "min")
                cout << "Result: " << fmin(a, b) << endl;

            else if (op == "atan2")
                cout << "Result: " << atan2(a, b) << endl;
        }

        else if (op == "sin" || op == "asin" || op == "cos" || op == "acos" ||
            op == "tan" || op == "atan" || op == "sqrt" || op == "ceil" ||
            op == "abs" || op == "floor" || op == "log" || op == "log10" ||
            op == "log2" || op == "round") {

            cout << "Enter a number: ";
            cin >> a;

            if (op == "sin")
                cout << "Result: " << sin(a) << endl;

            else if (op == "asin")
                cout << "Result: " << asin(a) << endl;

            else if (op == "cos")
                cout << "Result: " << cos(a) << endl;

            else if (op == "acos")
                cout << "Result: " << acos(a) << endl;

            else if (op == "tan")
                cout << "Result: " << tan(a) << endl;

            else if (op == "atan")
                cout << "Result: " << atan(a) << endl;

            else if (op == "sqrt")
                cout << "Result: " << sqrt(a) << endl;

            else if (op == "ceil")
                cout << "Result: " << ceil(a) << endl;

            else if (op == "abs")
                cout << "Result: " << fabs(a) << endl;

            else if (op == "floor")
                cout << "Result: " << floor(a) << endl;

            else if (op == "log")
                cout << "Result: " << log(a) << endl;

            else if (op == "log10")
                cout << "Result: " << log10(a) << endl;

            else if (op == "log2")
                cout << "Result: " << log2(a) << endl;

            else if (op == "round")
                cout << "Result: " << round(a) << endl;
        }

        else {
            cout << "Invalid operator. Please try again.\n";
        }

        cout << "Would you like to solve another problem? (Y/N): ";
        cin >> again;
    }

    cout << "\nThanks for using the Basic Math Calculator!\n";

    return 0;
}