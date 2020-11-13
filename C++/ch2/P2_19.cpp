#include <iostream>
#include <iostream>

using namespace std;

int main()
{
	int m_num = 0;
	string m = "";

	cout << "Enter the month's number, between 1-12: ";
	cin >> m_num;

	switch(m_num)
	{
		case 1: m = "January";
		break;
		case 2: m = "February";
		break;
		case 3: m = "March";
		break;
		case 4: m = "April";
		break;
		case 5: m = "May";
		break;
		case 6: m = "June";
		break;
		case 7: m = "July";
		break;
		case 8: m = "August";
		break;
		case 9: m = "September";
		break;
		case 10: m = "October";
		break;
		case 11: m = "November";
		break;
		case 12: m = "December";
		break;
		default: 
		cout << "Not proper value." << endl;
	}

	cout << m << endl;

	return 0;
}
