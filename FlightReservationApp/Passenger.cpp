#include "Passenger.h"
#include"pch.h"
#include <iostream>
using namespace std;

namespace FlightReservationApp {

     Passenger::Passenger(const std::string & firstname, const std::string & lastname)
		:mpassengerFirstname(firstname), mpassengerLastname(lastname)
	{

	}


	void  Passenger::setpassengerFirstname(const std::string &firstname) {
		mpassengerFirstname = firstname;

	}

	const string&  Passenger::getpassengerFirstname() const {

		return mpassengerFirstname;
	}


	void  Passenger::setpassengerLastname(const std::string &lastname) {
		mpassengerLastname = lastname;

	}

	const string&  Passenger::getpassengerLastname() const 
	{

		return mpassengerLastname;
	}

	void  Passenger::setpassengerAddress(const std::string &address) {
		mpassengeraddress = address;

	}

	const string&  Passenger::getpassengerAddress() const {

		return mpassengeraddress;
	}

	void  Passenger::setpassengerEmail(const std::string &email) {
		mpassengeremail = email;

	}

	const string&  Passenger::getpassengerEmail() const {

		return mpassengeremail;
	}

	void Passenger::setpassengerPhonenumber(int phonenumber)
	{
		mpassengerphonenumber = phonenumber;

	}

	int Passenger::getpassengerPhonenumber() const
	{
		return mpassengerphonenumber;
	}



	void Passenger::setClass(const std::string &Class)
	{
		mClass = Class;
	}
	const string& Passenger::getClass() const
	{
		return mClass;

	}


	void Passenger:: passengerinfo() const
	{
	 
		cout << "Passenger" << getpassengerLastname()<< "  , "<< getpassengerFirstname() << endl;

		cout << " ADRESS" << getpassengerAddress() << endl;

		cout << " contactinfo" << getpassengerEmail() << " EMAIL" << " PHONENUMBER "<< getpassengerPhonenumber() << endl;

      

	
	}





}










