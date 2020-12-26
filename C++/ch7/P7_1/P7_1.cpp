#include "P7_1.h"

Person::Person()
{
	best_friend = NULL;
	popularity_counter = 0;
}

Person::Person(const string& name)
{
	this->name = name;
	best_friend = NULL;
	popularity_counter = 0;
}

string Person::get_name() const
{
	return name;
}

void Person::set_best_friend(Person* bf)
{
	best_friend = bf;

	best_friend->set_counter();
}

string Person::get_best_friend() const
{
	return best_friend->get_name();
}

void Person::set_counter()
{
	popularity_counter += 1;
}

int Person::get_counter() const
{
	return popularity_counter;
}
