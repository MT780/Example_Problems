#include "P5_3.h"

Address::Address(int& house_number, string& street, string& apt_number, string& city, string& state, int& postal_code)
{
	this->house_number = house_number;
	this->street = street;
	this->apt_number = apt_number;
	this->city = city;
	this->state = state;
	this->postal_code = postal_code;
}

Address::Address(int& house_number, string& street, string& city, string& state, int& postal_code)
{
	this->house_number = house_number;
	this->street = street;
	this->city = city;
	this->state = state;
	this->postal_code = postal_code;
}

void Address::print()
{
	cout << house_number << " " << street;

	if (apt_number != "")
	{
		cout << " " << apt_number;
	}

	cout << "," << endl;

	cout <<  city << ", " << state << " " << postal_code << endl;
}

int Address::get_postal() const
{
	return postal_code;
}

void Address::comes_before(Address& next_address)
{
	if (next_address.get_postal() > postal_code)
	{
		next_address.print();
		cout << "\ncomes before... \n" << endl;
		print();
	}

	else
	{
		print();
		cout << "\ncomes before... \n" << endl;
		next_address.print();
	}
}
