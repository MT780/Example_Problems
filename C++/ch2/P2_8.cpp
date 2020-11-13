#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float length_a = 0;
	float length_b = 0;
	float length_c = 0;
	float angle_a = 0;
	float angle_b = 0;
	float angle_c = 0;

	cout << "Please provide the length of one side." << endl;
	cout << "a = ";
	cin >> length_a;

	cout << "Please provide two angles adjacent to that side." << endl;
	cout << "B = ";
	cin >> angle_b;
	cout << "C = ";
	cin >> angle_c;

	angle_a = 180 - angle_b - angle_c;

	cout << "The size of the third angle is the following." << endl;
	cout << "A = " << angle_a << endl;

	length_b = (length_a/sin(angle_a * M_PI/180)) * sin(angle_b * M_PI/180);
	length_c = (length_a/sin(angle_a * M_PI/180)) * sin(angle_c * M_PI/180);

	cout << "The lengths of side (b) and side (c) are the following." << endl;
	cout << "b = " << length_b << endl;
	cout << "c = " << length_c << endl;

	return 0;


}
