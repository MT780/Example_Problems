#include <iostream>
#include <string>

using namespace std;

int main()
{
	string digit = "";
	int num_of_places = 0;

	cout << "Input any digit: ";
	cin >> digit;

	num_of_places = digit.length();

	for(int i = 0; i < num_of_places; i++)
	{
		if(i == num_of_places-1)
		{
			cout << digit.substr(i, 1) << endl;

			return 0;
		}

		cout << digit.substr(i, 1) << " ";
	}	

	return 0;
}
