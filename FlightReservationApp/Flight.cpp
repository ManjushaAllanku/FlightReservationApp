 #include"pch.h"
#include"Flight.h"
#include <iostream>

using namespace std;
namespace FlightReservationApp {

	Flight::Flight(const std::string &flightnumber) 
		:mFlightNumber(flightnumber)
	{


	}
	
	void Flight::setFlightNumber(const std::string & flightnumber) {

		mFlightNumber = flightnumber;
	}
	const string& Flight:: getFlightNumber() const {
	
		return mFlightNumber;
	}

	void Flight::setSeatNumber(const std::string& seatnumber) {
		mSeatNumber = seatnumber;
	}

	const string&  Flight::getSeatNumber() const {

		return mSeatNumber;
	}

	void Flight::setStarting(const std::string & From) {
		mStarting = From;
	
	}
	const string& Flight:: getStarting() const {

		return mStarting;
		
	}
	void  Flight::setDestination(const std::string & To) {
		mDestination = To;

	}
	const string&  Flight::getDestination() const {
		return mDestination;
	}
	void Flight::setboardingTime(clock_t boardingtime) {
		mBoardingtime = boardingtime;

	}
	clock_t Flight::getboardingTime() {
		return mBoardingtime;

	}
	void Flight::setarrivalTime(clock_t arrivaltime) {
		mArrivaltime = arrivaltime;

	}
	clock_t  Flight::getarrivalTime() {
		return mArrivaltime;

	}

	void Flight::setgate(const std::string& gateNo) 
	{
		mGateNO = gateNo;

	}
	
	const string& Flight::getgate() const 
	{
		return mGateNO;
	}

	void Flight::setSeats(int seats)
	{
		mSeats = seats;
		
	}
	int Flight::getSeats() 
	{
		return mSeats;
	 }
	void Flight::setDepartDate(const std::string& departdate)
	{
		mDepartdate = departdate;
	}
	

      const string& Flight::getDepartDate() const
     {
	       return mDepartdate;

      }

	  void Flight::setReturnDate(const std::string& returndate)
	  {
		  mReturndate = returndate;

	  }

	  const string& Flight::getReturnDate() const
	  {

		  return mReturndate;
	  }


	  void Flight::BookaFlight()
	  {
	  
		  string from;
		  string to;
		  string startingdate;
		  string returndate;
		  string seats;


		  cout << "From" << getStarting() << endl;
		  cin >> from;

		  cout << "TO" << getDestination() << endl;
		  cin >> to;

		  cout << "Startingdate" << getDepartDate() << endl;
		  cin >> startingdate;

		  cout << "returndate" << getReturnDate() << endl;
		  cin >> returndate;

		  cout << "no of seats" << getSeats() << endl;
		  cin >> seats;

	  
	  }

	void Flight:: FlightDetails()  const {

		cout << "FlightNumber" << getFlightNumber() << endl;

		cout << "From" << getStarting() <<   "      T0          "<< getDestination<< endl;
		
		cout << "GateNumber" << getgate() << endl;
	
		cout << "SeatNumber" << getSeatNumber() << endl;
		
		cout << "BoardingTime" << getboardingTime << endl;
		
		cout << "ArrivalTime" << getarrivalTime << endl;


	}

}

