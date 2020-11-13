#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int const THOUSAND = 1000;
	int value = 0;
	int PlaceHolder_1 = 0;
	int PlaceHolder_2 = 0;

	cout << "Please enter an integer between (1000 < x >= 999,999): ";
	cin >> value;

	PlaceHolder_1 = value/THOUSAND;
	PlaceHolder_2 = value - (PlaceHolder_1 * THOUSAND);

	cout << PlaceHolder_1 << "," << PlaceHolder_2 << endl;

	return 0;
}
