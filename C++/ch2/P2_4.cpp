#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float meters = 0;
	const float MILES = 1/1609.34;
	const float FEET = 1/0.3048;
	const float INCHES = 1/0.0254;

	cout << "Please input the measurement in meters." << endl;
	cout << "m=";
	cin >> meters;

	cout << "The following converts meters into miles, feet, and inches respectively." << endl;
	cout << "m=" << meters * miles << endl;
	cout << "ft=" << meters * feet << endl;
	cout << "in=" << meters * inches << endl;

	return 0;
}
