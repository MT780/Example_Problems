#include "P5_2.h"

int main()
{
	cout << "Please enter name and salary" << endl;

	string name;
	cout << "Name: ";
	cin >> name;

	int salary = 0;
	cout << "Salary: ";
	cin >> salary;

	PEmployee first(name, salary);

	cout << "Would you like to change salary? (Y/N)" << endl;
	char answer;
	cin >> answer;

	if (answer == 'Y')
	{
		cout << "Salary: ";
		cin >> salary;
		first.set_salary(salary);
	}

	cout << "Name of employee is: " << first.get_name() << endl;
	cout << "Salary of employee is: " << first.get_salary() << endl;

	return 0;
}
