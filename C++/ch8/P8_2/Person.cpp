#include "Person.h"

Person::Person()
{
	name = "";
	b_day = "00/00/0000";
}

Person::Person(const string& name, const string& b_day)
{
	this->name = name;
	this->b_day = b_day;
}

string Person::get_name() const
{
	return name;
}

string Person::get_b_day() const
{
	return b_day;
}

void Person::print()
{
	cout << "Name: " << name << endl;
	cout << "DOB: " << b_day << endl;
}
