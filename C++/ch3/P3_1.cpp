#include <iostream>
#include <cmath>  

using namespace std;

int main()
{
	float a = 0;
	float b = 0;
	float c = 0;
	float x = 0;
	float x_1 = 0;
	float in_sqrt = 0;
	float rt_1 = 0;
	float rt_2 = 0;

	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;

	cout << "c = ";
	cin >> c;

	in_sqrt = pow(b, 2) - 4 * a * c;

	if (in_sqrt < 0)
	{
		cout << "No Solution" << endl;
		return 0;
	}

	rt_1 = sqrt(in_sqrt);
	rt_2 = rt_1 * -1;

	x = (-b + rt_1)/(2 * a);
	x_1 = (-b + rt_2)/(2 * a);

	cout << "The possible solutions are: (";

	if (a * pow(x, 2) + b * x + c == 0)
	{
		cout << x;
	} 
	if(a * pow(x_1, 2) + b * x_1 + c == 0 && a * pow(x, 2) + b * x + c == 0)
	{
		cout << ", " << x_1 << ")" << endl;
		return 0;
	}
	if(a * pow(x_1, 2) + b * x_1 + c == 0)
	{
		cout << x_1;
	}

	cout << ")" << endl;
	return 0;
	



}
