#include "P5_1.h"

Person::Person()
{
	age = 0;
}

Person::Person(string pname, int page)
{
	name = pname;
	age = page;
}

void Person::get_name() const
{
	cout << "Name is: " << name << endl;
}

void Person::get_age() const
{
	cout << "Age is: " << age << endl;
}
