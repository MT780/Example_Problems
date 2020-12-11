#include "P5_1.h"

Person::Person()
{
	age = 0;
}

Person::Person(string pname)
{
	name = pname;
	age = 0;
}

Person::Person(string pname, int page)
{
	name = pname;
	age = page;
}

string Person::get_name() const
{
	return name;
}

void Person::get_age() const
{
	cout << "Age is: " << age << endl;
}
