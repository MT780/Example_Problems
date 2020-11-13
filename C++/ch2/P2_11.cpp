#include <iostream>
#include <string>

using namespace std;

int main()
{
	string drive_l = "";
	string path = "";
	string file_n = "";
	string file_e = "";

	cout << "Enter the drive letter in caps." << endl;
	cin >> drive_l;

	cout << "Enter the path to the file." << endl;
	cin >> path;

	cout << "Enter the file's name." << endl;
	cin >> file_n;

	cout << "Enter the file's extension" << endl;
	cin >> file_e;

	cout << drive_l + ":\\" + path + file_n + file_e << endl;

	return 0;
}
