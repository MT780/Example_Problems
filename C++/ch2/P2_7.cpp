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
	
	cout << "Provide the lengths of two side's of a triangle." << endl;
	cout << "a = ";
	cin >> length_a;
	cout << "b = ";
	cin >> length_b;

	cout << "Provide the angle between length (a) and length (b)." << endl;
	cout << "C = ";
	cin >> angle_c;

	float deg_into_rad = cos(angle_c * M_PI/180);
	cout << deg_into_rad << endl;

	length_c = sqrt(pow(length_a,2) + pow(length_b,2) - 2 * length_a * length_b * cos(angle_c * M_PI/180));
	cout << "Length (c) = " << length_c << endl;

	angle_a = acos((pow(length_a,2) - pow(length_b,2) - pow(length_c,2))/(-2 * length_b * length_c));
	angle_b = acos((pow(length_b,2) - pow(length_a,2) - pow(length_c,2))/(-2 * length_a * length_c));
	cout << "Angle (A) and (B) are the following." << endl;
	angle_a *= (180/M_PI);
	cout << "A = " << angle_a << endl;
	angle_b *= (180/M_PI);
	cout << "B = " << angle_b << endl;

	return 0;
}
