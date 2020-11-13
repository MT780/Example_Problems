//P2_9.cpp

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	float cost = 0;
	float balance = 0;
	int quotient = 0;
	float const DOLLAR = 100;
	float const QUARTER = 25;
	float const DIME = 10;
	float const NICKEL = 5;
	float const PENNIE = 1;

	cout << "Enter the amount due." << endl;
	cout << "$";
	cin >> cost;

	cout << "Enter the amount given." << endl;
	cout << "$";
	cin >> balance;

	balance = (balance - cost) * 100;

	if(balance < 0)
	{
		cout << "Not enough sufficient funds, they owe $" << abs(balance) << "." << endl;
		return 0;
	}

	cout << " Give back: " << endl;

	quotient = balance/DOLLAR;
	balance -= (quotient*DOLLAR);
	cout << quotient << " dollar(s)" << endl;

	quotient = balance/QUARTER;
	balance = balance - (quotient*QUARTER);
	cout << quotient << " quarter(s)" << endl;

	quotient = balance/DIME;
	balance -= (quotient*DIME);
	cout << quotient << " dime(s)" << endl;

	quotient = balance/NICKEL;
	balance -= (quotient*NICKEL);
	cout << quotient << " nickel(s)" << endl;

	quotient = balance/PENNIE;
	balance -= (quotient*PENNIE);
	cout << quotient << " pennie(s)" << endl;

	return 0;
}
