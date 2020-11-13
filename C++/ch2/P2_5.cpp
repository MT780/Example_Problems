#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float radius = 0;

	cout << "Please insert the radius: ";
	cin >> radius;

	float area = 3.14 * pow(radius, 2);
	float circumference = 2*3.14*radius;
	float volume = (4*3.14*pow(radius,3))/3;
	float s_area = 4*3.14*pow(radius,2);

	cout << "A = " << area << endl;
	cout << "C = " << circumference << endl;
	cout << "V = " << volume << endl;
	cout << "SA = " << s_area << endl;

	return 0;

	
}
