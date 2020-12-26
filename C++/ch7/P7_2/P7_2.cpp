#include "P7_2.h"

Person::Person()
{
	 age = 0;
}

Person::Person(const string& name, int& age)
{
	this->name = name;
	this->age = age;
}

void Person::incriment_age()
{
	age += 1;
}

string Person::get_name() const
{
	return name;
}

Car::Car()
{
	owner = NULL;
	driver = NULL;
}

Car::Car(const string& model)
{
	this->model = model;
	owner = NULL;
	driver = NULL;
}

string Car::get_model() const
{
	return model;
}

void Car::set_owner(Person* owner)
{
	this->owner = owner;
}

string Car::get_owner() const
{
	return owner->get_name();
}

void Car::set_driver(Person* driver)
{
	this->driver = driver;
}

string Car::get_driver() const
{
	return driver->get_name();
}

