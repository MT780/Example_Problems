#include <iostream>
#include <string>

using namespace std;

int main()
{
	string value = "";
	int length = 0;
	string first_half = "";
	string second_half = "";

	cout << "Please enter an integer between 1,000 and 999,999: ";
	cin >> value;

	length = value.length();

	first_half = value.substr(0, length-4);
	second_half = value.substr(length-3);

	cout << first_half + second_half << endl;

	return 0;
}
