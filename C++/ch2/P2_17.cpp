#include <iostream>

using namespace std;

int main()
{
	int total;
	
	cout << "Please enter a number: ";
	double x1;
	cin >> x1;

	cout << "total = " << total << "\n";
	total = total + x1;
	cout << "total = " << total << "\n";
	cout << "Please enter a number: ";
	double x2;
	cin >> x2;
	total = total + x2;
	cout << "total = " << total << "\n";
	total = total / 2;
	cout << "total = " << total << "\n";
	cout << "The average is " << total << "\n";
	return 0;
}
