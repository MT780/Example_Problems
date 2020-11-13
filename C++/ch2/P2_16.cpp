#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int t_1 = 0;
	int t_2 = 0;
	int difference = 0;
	int hrs = 0;
	int min = 0;

	cout << "Please enter the first time: ";
	cin >> t_1;

	cout << "Please enter the second time: ";
	cin >> t_2;

	hrs = t_1/100;
	min = hrs * 60;
	t_1 = min + t_1 % 100;

	hrs = t_2 / 100;
	min = hrs * 60;
	t_2 = min + t_2 % 100;

	difference = t_2 - t_1;

	if (difference <= 0)
	{
		difference = abs(difference);
		difference = 1440 - difference;
	        hrs = difference/60;
		min = difference - (hrs * 60);
	}
	else if(difference > 0)
	{
		hrs = difference/60;
		min = difference - (hrs * 60);
	}

	cout << hrs << " hours " << min << " minutes" << endl;

	return 0;
}
