# include "pch.h"
# include <iostream>
#include"DataBase.h"
#include"DataBase.h"
#include"Passenger.h"

using namespace std;

using namespace FlightReservationApp;

int displayMenu(); 



int main() 
{

	Database databaseDB;
	Flight flightFT;
	Passenger passengerps;


	while (true) {
		int selection = displayMenu();
		switch (selection) {
				case 1:
		 flightFT.BookaFlight();
			break;
		case 2:
			databaseDB.displayAllFlights();
			break;
		case 3:
			passengerps.passengerinfo();
			break;
		case 4:
			flightFT.FlightDetails();
			break;
	
		case 5:
			return 0;
			break;
		default:
			cerr << "Unknown command." << endl;
			break;
		}
	}

	return 0;
}


int displayMenu()
{
	
		int selection;

		cout << "1) Reserve a seat" << endl;

		cout << "2) FlightSchedule" << endl;

		cout << "3) PassengerInformation" << endl;

		cout << "4) FlightDetails" << endl;

		cout << "5) Quit" << endl;

		cout << endl;
		cout << "---> ";

		cin >> selection;

		return selection;
	
}





