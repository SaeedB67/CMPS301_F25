#include <iostream>
using namespace std;

int main() {

    string name;
    cout << "Please enter your Name: _____ ";
    cin >> name;

    int age;
    cout << "Please enter your Age: _____ ";
    cin >> age;

    string gender;
    cout << "Please enter your gender (M/F): _____ ";
    cin >> gender;

    int height;
    cout << "Please enter your height in feet: _____ ";
    cin >> height;

    double inches;
    cout << "Please enter your height in inches: _____ ";
    cin >> inches;

    double weight;
    cout << "Please enter your weight in pounds: _____ ";
    cin >> weight;

    double bmi;
    bmi = (height * 12) + inches;
    bmi = 703 * weight / (bmi * bmi);

    cout << "Hi " << name << ",\nYou are a " << gender
        << ". You are " << age << " years old. You are currently "
        << height << "'" << inches
        << " and you currently weigh " << weight << " lbs. Your BMI is "
        << bmi
        << " which is a screening tool that estimates body fat based on a person's height and weight.";

    return 0;
}
