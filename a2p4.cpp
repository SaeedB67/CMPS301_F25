#include <iostream>
#include <string>
using namespace std;

int main(){
	cout << "============ GUEST PROFILE SHEET ===========" << endl;
	cout << "Enter Your Full name: ";
	string name;
	getline(cin, name);
	cout << "Enter Your Preferred Name: ";
	string prefferedName;
	getline(cin, prefferedName);
	cout << "Enter Your Email Address: ";
	string email;
	getline(cin, email);
	cout << "Enter Your Phone Number: ";
	string phoneNumber;
	getline(cin, phoneNumber);
	cout << "Enter Your City and State: ";
	string cityState;
	getline(cin, cityState);
	cout << "Enter Your Occupation: ";
	string occupation;
	getline(cin, occupation);
	cout << "Enter Your Company or School: ";
	string companyOrSchool;
	getline(cin, companyOrSchool);
	cout << "Enter Your Favorite Hobby: ";
	string hobby;
	getline(cin, hobby);
	cout << "Enter a Short Quote or Motto: ";
	string quoteOrMotto;
	getline(cin, quoteOrMotto);
	cout << "Name: " << name << endl;
	cout << "Preferred Name: " << prefferedName << endl;
	cout << "Email Address: " << email << endl;
	cout << "Phone Number: " << phoneNumber << endl;
	cout << "City and State: " << cityState << endl;
	cout << "Occupation: " << occupation << endl;
	cout << "Company or School: " << companyOrSchool << endl;
	cout << "Favorite Hobby: " << hobby << endl;
	cout << "Short Quote or Motto: " << quoteOrMotto << endl;
	cout << "============================================" << endl;
	cout << "Thank you for sharing your profile with us!" << endl;
	return 0;
}