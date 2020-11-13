#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float length = 0;
	float width = 0;

	cout << "Please provide the sides of a rectangle." << endl;
	cout << "l = ";
	cin >> length;
	cout << "w = ";
	cin >> width;

	float area = length*width;
	float perimeter = 2*length+2*width;
	float hypotnus = sqrt(pow(length, 2) + pow(width, 2));

	cout << "A = " << area << endl;
	cout << "P = " << perimeter << endl;
	cout << "H = " << hypotnus << endl;
	
	return 0;


}
