#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "****** Welcome to Cinemagic Booking System ******" << endl;
	cout << "========== CINEMAGIC TICKET CONFIRMATION ==========" << endl;
	cout << "Customer: ";
	string customerName;
	getline(cin, customerName);
	cout << "Movie: ";
	string movieName;
	getline(cin, movieName);
	cout << "Showtime: ";
	string showtime;
	getline(cin, showtime);
	cout << "Theater: ";
	int theaterNumber;
	getline(cin, movieName);
	cout << "Seat: ";
	string seatNumber;
	getline(cin, seatNumber);
	cout << "Location: ";
	string location;
	getline(cin, location);
	cout << "Tickets: ";
	int ticketCount;
	cin >> ticketCount;
	cout << "Price per Ticket: ";
	double ticketPrice;
	cin >> ticketPrice;
	cout << "-----------------------------------------------" << endl;
	double total;
	total = ticketCount * ticketPrice;
	cout << "Total Amount: $" << total << endl;
	cout << "===============================================" << endl;
	cout << "Thank you, " << customerName << ", for booking with Cinemagic! Enjoy the show!" << endl;
	return 0;
}