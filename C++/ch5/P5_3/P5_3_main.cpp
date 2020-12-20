#include "P5_3.h"

int main()
{
	cout << "Please enter address." << endl;

	int house_number = 0;
	string street = "";
	string apt_number = "";
	string city = "";
	string state = "";
	int postal_code = 0;

	cout << "House number: ";
	cin >> house_number;
	cin.ignore(256, '\n');

	cout << "Street: ";
	getline(cin, street);

	cout << "Apartment: ";
	getline(cin, apt_number);

	cout << "City: ";
	cin >> city;

	cout << "State: ";
	cin >> state;

	cout << "Postal code: ";
	cin >> postal_code;

	if(apt_number != "")
	{
		Address first(house_number, street, apt_number, city, state, postal_code);
	}
	
	else
	{
		Address first(house_number, street, city, state, postal_code);
	}

	first.print();

	cout << "Is there another address you wish to compare?" << endl;

	char answer;
	cin >> answer;

	if(answer == 'Y')
	{
		cout << "House number: ";
		cin >> house_number;
		cin.ignore(256, '\n');

		cout << "Street: ";
		getline(cin, street);

		cout << "Apartment: ";
		getline(cin, apt_number);

		cout << "City: ";
		cin >> city;

		cout << "State: ";
		cin >> state;

		cout << "Postal code: ";
		cin >> postal_code;

		if(apt_number != "")
		{
			first.comes_before (Address second(house_number, street, apt_number, city, state, postal_code));
		}

		else
		{
			first.comes_before(Address second(house_number, street, city, state, postal_code));
		}
	}	

	return 0;

}
