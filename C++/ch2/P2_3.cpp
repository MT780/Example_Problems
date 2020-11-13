#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float x = 0;
	float y = 0;
	float result = 0;

	cout << "Please enter two integers." << endl;
	cout << "x = ";
	cin >> x;

	cout << "y = ";
	cin >> y;
	cout << endl;

	result = x + y;
	cout << "The sum of " << x << "+" << y << "= " << result << endl;
	result = x - y;
	cout << "The difference of " << x << "-" << y << "= " << result << endl;
	result = x * y;
	cout << "The product of " << x << "*" << y << "= " << result << endl;
	result = ((x+y)/2);
	cout << "The average of (" << x << "+" << y << ")/2= " << result << endl;
	result = fabs(x-y);
	cout << "The distance of " << x << " and " << y << " is " << result << endl;
	result = max(x,y);
	cout << "The max between " << x << " and " << y << " is " << result << endl;
	result = min(x,y);
	cout << "The min between " << x << " and " << y << " is " << result << endl;

	return 0;
}
