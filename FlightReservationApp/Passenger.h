#pragma once
#include<string>

 namespace FlightReservationApp {

	 class Passenger {

	 public:
		 Passenger() = default;
		 Passenger(const std::string & firstname, const std::string & lastname);


		 void setpassengerFirstname(const std::string& firstName);
		 const std::string& getpassengerFirstname() const;

		 void setpassengerLastname(const std::string& lastName);
		 const std::string& getpassengerLastname() const;

		 void setpassengerAddress(const std::string & address);
		 const std::string & getpassengerAddress() const;
		 
		 void setpassengerEmail(const std::string & email);
		 const std::string & getpassengerEmail() const;

		 void setpassengerPhonenumber(int phonenumber) ;
		 int  getpassengerPhonenumber() const;

		 void setClass(const std::string& Class);
		 const std::string& getClass() const;

		 void passengerinfo() const;

		 void ticketinfo() const;


		        

	 private:
		 std::string mpassengerFirstname;
		 std::string mpassengerLastname;
		 std::string mpassengeraddress;
		 std::string mpassengeremail;
		 std::string mClass;
		 int mpassengerphonenumber;
		

	 };


}
