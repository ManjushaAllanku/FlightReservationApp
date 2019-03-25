#pragma once
#include <string>
#include <ctime>
namespace FlightReservationApp {

	class Flight {

	public: Flight() = default;
			Flight(const std::string &flightnumber);
				

			void setFlightNumber(const std::string & flightnumber);
			const std::string& getFlightNumber() const;

			void setSeatNumber (const std::string& seatnumber);
			 const std::string& getSeatNumber() const;

			void setboardingTime(clock_t boardingtime);
			clock_t getboardingTime();

			void setarrivalTime(clock_t arrivaltime);
			clock_t getarrivalTime();
			 
			void setStarting(const std::string & From);
			const std::string& getStarting() const;

			void setDestination(const std::string & To);
			const std::string& getDestination() const;

			void setgate(const std::string &GateNo);
			const std::string& getgate() const;

			void setDepartDate(const std::string& startdate);
			const std::string& getDepartDate() const;

			void setReturnDate(const std::string& returndate);
			const std::string& getReturnDate() const;

			void FlightDetails()  const;
			 
			void setSeats(int seats);
			int getSeats();

			void BookaFlight();

		
	private: 
			 std::string mFlightNumber;
			 std::string mSeatNumber;
			 std::string mclass; 
	     	 std::string mDestination;
			 std::string mStarting;
			 clock_t mBoardingtime;
			 clock_t mArrivaltime;
			 std::string mGateNO;
			 int mSeats;
			 std::string mDepartdate;
			 std::string mReturndate;
	};





}