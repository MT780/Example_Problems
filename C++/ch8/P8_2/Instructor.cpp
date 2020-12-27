#include "Instructor.h"

Instructor::Instructor()
{
	salary = 0;
}

Instructor::Instructor(const string& name, const string& b_day, const int& salary)
	: Person(name, b_day)
{
	this->salary = salary;
}

int Instructor::get_salary() const
{
	return salary;
}

void Instructor::print()
{
	cout << endl << "Instructor: " << get_name() << endl;
	cout << "DOB: " << get_b_day() << endl;
	cout << "Salary: " << salary << endl;
}
