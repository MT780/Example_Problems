#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	float gallons = 0;
	float m_per_g = 0;
	float gas_per_g = 0;

	cout << "How many gallons are in the tank?" << endl;
	cin >> gallons;

	cout << "How many miles/gallon can the vehicle go?" << endl;
	cin >> m_per_g;

	cout << "What is the price of gass/gallon?" << endl;
	cin >> gas_per_g;

	cout << "refill within " << setprecision(2) << fixed << gallons * m_per_g << " miles." << endl;
	cout << "To travel 100 miles, you will need to pay " << setprecision(2) << fixed << 100 / m_per_g * gas_per_g << "$." << endl;

	return 0;
}
