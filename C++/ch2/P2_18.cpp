#include <iostream>
#include <string>

using namespace std;

int main()
{
	string h_1 = "*****";
	string h_2 = "*   *";
	string e_1 = "*";

	cout << h_2 + "\n" + h_2 + "\n" + h_1 + "\n" + h_2 + "\n" + h_2 + "\n";

	cout << endl;

	cout << h_1 + "\n" + e_1 + "\n" + h_1 + "\n" + e_1 + "\n" + h_1 + "\n";

	cout << endl;

	cout << e_1 + "\n" + e_1 + "\n" + e_1 + "\n" + e_1 + "\n" + h_1 + "\n";

	cout << endl;

	cout << e_1 + "\n" + e_1 + "\n" + e_1 + "\n" + e_1 + "\n" + h_1 + "\n";

	cout << endl;

	cout << h_1 + "\n" + h_2 + "\n" + h_2 + "\n" + h_2 + "\n" + h_1 + "\n";

	return 0;
}
