#include "Student.h"

Student::Student()
{
	major = "";
}

Student::Student(const string& name, const string& b_day, const string& major)
	: Person(name, b_day)
{
	this->major = major;
}

string Student::get_major() const
{
	return major;
}

void Student::print()
{
	Person::print();
	cout << "Major: " << major << endl;
}

