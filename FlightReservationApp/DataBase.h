#pragma once
#include "Flight.h"
#include "Passenger.h"
#include <vector>
#include <iostream>


namespace FlightReservationApp {

	class Database {
	public :
		 
		Database() = default;

		Flight&addFlight(const std::string & flightnumber);

		Passenger&addPassenger(const std::string &firstname,
			const std::string &lastname);

		Flight&getFlight(const std::string &flightnumber);

		Passenger&getPassenger(const std::string&firstname,
			const std::string&lastname);

		Passenger&getPassenger(int phonenumber);

		void displayAllFlights();

		void displayPassengersinfo();

		
		

		

		

	private :

		std::vector <Flight> mFlights;

		std::vector<Passenger> mPassengers;
		  
		std::vector<Flight> mNextFlightNumber;
	};

}