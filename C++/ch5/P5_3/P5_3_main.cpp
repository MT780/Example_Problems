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
	cout << endl;

	if(apt_number != "")
	{
		Address ad_w_apt(house_number, street, apt_number, city, state, postal_code);

		ad_w_apt.print();


	cout << "Is there another address you wish to compare?" << endl;

	char answer;
	cin >> answer;

	if(answer == 'Y')
	{
		cout << "House number: ";
		cin >> house_number;
		//cin.ignore(256, '\n');

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
		cout << endl;

		Address second(house_number, street, apt_number, city, state, postal_code);
		ad_w_apt.comes_before (second);
	}	
	}
	
	else
	{
		Address ad_wout_apt(house_number, street, city, state, postal_code);

		ad_wout_apt.print();


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
		cout << endl;

		
		Address second(house_number, street, city, state, postal_code);
		ad_wout_apt.comes_before (second);
	}	
	}
	return 0;

}
