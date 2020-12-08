//Asks user to enter name and age, then return the information to screen.
#include "P5_1.h"

int main()
{
	string name;
	int age;

	cout << "Please enter name: ";
	cin >> name;

	cout << "Please enter age: ";
	cin >> age;

	Person p(name, age);

	p.get_name();
	p.get_age();

	return 0;
}
