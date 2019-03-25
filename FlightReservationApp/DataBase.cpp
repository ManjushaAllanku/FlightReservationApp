#include"DataBase.h"
#include<iostream>
#include"pch.h"
#

using namespace std;

namespace FlightReservationApp {

	

	Flight& Database::addFlight(const string & flightnumber)
	{
		Flight theFlights(flightnumber);
		mFlights.push_back(theFlights);
		return mFlights[mFlights.size() - 1];


	}

	Passenger& Database::addPassenger(const string&firstname,
		const string&lastname)
	{
		Passenger thePassenger(firstname, lastname);
		mPassengers.push_back(thePassenger);
		return mPassengers[mPassengers.size() - 1];

	}

	Flight& Database::getFlight(const string&flightnumber)
	{
		for (auto& flight : mFlights)
		{
			if (flight.getFlightNumber = flightnumber)
			{
				return flight;
			}
		}
		throw logic_error("No flight found.");
	}

	Passenger&Database::getPassenger(const string&firstname, const string&lastname)
	{
		for (auto& passenger : mPassengers)
		{
			if (passenger.getpassengerFirstname = firstname &&
				passenger.getpassengerLastname = lastname)
			{
				return passenger;
			}
		}
		throw logic_error("No passenger found");
	}

	Passenger&Database::getPassenger(int phonenumber)
	{
		for (auto& passenger : mPassengers)
		{
			if (passenger.getpassengerEmail = phonenumber)
			{
				return passenger;

			}

		}

		throw logic_error("No passenger found");
	}

	void Database::displayAllFlights()
	{

		for (const auto& flights : mFlights) 
		{
			flights.FlightDetails();
		}
	}

	

	void Database::displayPassengersinfo()
	{
	
		for (const auto& passenger : mPassengers)
		{
			
			passenger.passengerinfo();

          }
	}


}