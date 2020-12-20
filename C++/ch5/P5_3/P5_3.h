#ifndef P5_3_H
#define P5_3_H

#include <iostream>
#include <string>

using namespace std;

class Address
{
	public:
		//Sets the default values for any int variables
		Address();

		//Address is inputed to member variables
		//@param house_number set to house_number
		//@param street set to street
		//@param apt_number set to apt_number
		//@param city set to city
		//@param state set to state
		//@param postal_code set to postal_code
		Address(int& house_number, string& street, string& apt_number, string& city, string& state, int& postal_code);

		//Addres is inputed to member (no apt_number)
		//@param house_number set to house_number
		//@param street set to street
		//@param city set to city
		//@param state set to state
		//@param postal_code
	        Address(int& house_number, string& street, string& city, string& state, int& postal_code);

		//Prints address with street on one line and the city, state, and postal code on the next line
               	void print();
		
		//Tests whether one address comes before another when compared by postal code
		//@param next_address retrieve other object's infor
		void comes_before(Address& next_address);
		
		//Gets the postal address
		//@return provides postal address
		int get_postal() const;	

	private:
		int house_number;
		string street;
		string apt_number;
		string city;
		string state;
		int postal_code;
};

#endif
