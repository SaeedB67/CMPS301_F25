#include <iostream>
using namespace std;

int main() {

    char again = 'Y';

    cout << "Welcome to Birthday Date Meaning Generator!\n";

    while (again == 'Y' || again == 'y') {

        int month;
        cout << "\nPlease enter the month of your birthday (1-12): ";
        cin >> month;

        int day;
        cout << "Please enter the day of your birthday (1-31): ";
        cin >> day;

        int year;
        cout << "Please enter the year of your birthday (2000-2023): ";
        cin >> year;

        switch (month) {
        case 1:
            cout << "The month of January means Janus.\n";
            break;
        case 2:
            cout << "The month of February means Purification.\n";
            break;
        case 3:
            cout << "The month of March means Renewal.\n";
            break;
        case 4:
            cout << "The month of April means Growth.\n";
            break;
        case 5:
            cout << "The month of May means Creativity.\n";
            break;
        case 6:
            cout << "The month of June means Harmony.\n";
            break;
        case 7:
            cout << "The month of July means Strength.\n";
            break;
        case 8:
            cout << "The month of August means Leadership.\n";
            break;
        case 9:
            cout << "The month of September means Learning.\n";
            break;
        case 10:
            cout << "The month of October means Transformation.\n";
            break;
        case 11:
            cout << "The month of November means Gratitude.\n";
            break;
        case 12:
            cout << "The month of December means Celebration.\n";
            break;
        default:
            cout << "Invalid month.\n";
        }

        switch (day) {
        case 1:
            cout << "The 1st of the month means Self-Starter.\n";
            break;
        case 2:
            cout << "The 2nd of the month means Peacemaker.\n";
            break;
        case 3:
            cout << "The 3rd of the month means Communicator.\n";
            break;
        case 4:
            cout << "The 4th of the month means Builder.\n";
            break;
        case 5:
            cout << "The 5th of the month means Adventurer.\n";
            break;
        case 6:
            cout << "The 6th of the month means Nurturer.\n";
            break;
        case 7:
            cout << "The 7th of the month means Thinker.\n";
            break;
        case 8:
            cout << "The 8th of the month means Ambitious.\n";
            break;
        case 9:
            cout << "The 9th of the month means Humanitarian.\n";
            break;
        case 10:
            cout << "The 10th of the month means Achiever.\n";
            break;
        case 11:
            cout << "The 11th of the month means Visionary.\n";
            break;
        case 12:
            cout << "The 12th of the month means Helper.\n";
            break;
        case 13:
            cout << "The 13th of the month means Reformer.\n";
            break;
        case 14:
            cout << "The 14th of the month means Explorer.\n";
            break;
        case 15:
            cout << "The 15th of the month means Healer.\n";
            break;
        case 16:
            cout << "The 16th of the month means Analyzer.\n";
            break;
        case 17:
            cout << "The 17th of the month means Organizer.\n";
            break;
        case 18:
            cout << "The 18th of the month means Leader.\n";
            break;
        case 19:
            cout << "The 19th of the month means Pioneer.\n";
            break;
        case 20:
            cout << "The 20th of the month means Partner.\n";
            break;
        case 21:
            cout << "The 21st of the month means Optimist.\n";
            break;
        case 22:
            cout << "The 22nd of the month means Master Builder.\n";
            break;
        case 23:
            cout << "The 23rd of the month means Networker.\n";
            break;
        case 24:
            cout << "The 24th of the month means Provider.\n";
            break;
        case 25:
            cout << "The 25th of the month means Observer.\n";
            break;
        case 26:
            cout << "The 26th of the month means Business Leader.\n";
            break;
        case 27:
            cout << "The 27th of the month means Humanitarian.\n";
            break;
        case 28:
            cout << "The 28th of the month means Individualist.\n";
            break;
        case 29:
            cout << "The 29th of the month means Counselor.\n";
            break;
        case 30:
            cout << "The 30th of the month means Performer.\n";
            break;
        case 31:
            cout << "The 31st of the month means Original Leader.\n";
            break;
        default:
            cout << "Invalid day.\n";
        }

        switch (year) {
        case 2000:
            cout << "The year 2000 means you are a Millennial.\n";
            break;
        case 2001:
            cout << "The year 2001 means Independence.\n";
            break;
        case 2002:
            cout << "The year 2002 means Cooperation.\n";
            break;
        case 2003:
            cout << "The year 2003 means Creativity.\n";
            break;
        case 2004:
            cout << "The year 2004 means Stability.\n";
            break;
        case 2005:
            cout << "The year 2005 means Adventure.\n";
            break;
        case 2006:
            cout << "The year 2006 means Compassion.\n";
            break;
        case 2007:
            cout << "The year 2007 means Intelligence.\n";
            break;
        case 2008:
            cout << "The year 2008 means Ambition.\n";
            break;
        case 2009:
            cout << "The year 2009 means Humanity.\n";
            break;
        case 2010:
            cout << "The year 2010 means Fresh Ideas.\n";
            break;
        case 2011:
            cout << "The year 2011 means Innovation.\n";
            break;
        case 2012:
            cout << "The year 2012 means Connection.\n";
            break;
        case 2013:
            cout << "The year 2013 means Realism.\n";
            break;
        case 2014:
            cout << "The year 2014 means Motivation.\n";
            break;
        case 2015:
            cout << "The year 2015 means Curiosity.\n";
            break;
        case 2016:
            cout << "The year 2016 means Balance.\n";
            break;
        case 2017:
            cout << "The year 2017 means Truth Seeking.\n";
            break;
        case 2018:
            cout << "The year 2018 means Determination.\n";
            break;
        case 2019:
            cout << "The year 2019 means Big Thinker.\n";
            break;
        case 2020:
            cout << "The year 2020 means Resilience.\n";
            break;
        case 2021:
            cout << "The year 2021 means Adaptation.\n";
            break;
        case 2022:
            cout << "The year 2022 means Vision.\n";
            break;
        case 2023:
            cout << "The year 2023 means New Beginnings.\n";
            break;
        default:
            cout << "Invalid year.\n";
        }

        cout << "Would you like to try another one? (Y/N): ";
        cin >> again;
    }

    cout << "Thanks for playing!\n";

    return 0;
}