#include <iostream>

using namespace std;

int main()
{
	float x = 0;
	float y = 0;
	float z = 0;
	float largest = 0;

	cout << "Please enter three numbers: ";
	cin >> x >> y >> z;

	if (x > y && x > z)
		largest = x;
	else if (y > x && y > z)
		largest = y;
	else if (z > x && z > y)
		largest = z;

	cout << "The largest number is " << largest << "." << endl;

	return 0;
}
