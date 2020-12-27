#include "Student.h"
#include "Instructor.h"

#include <vector>

int main()
{
	string name = "";
	string dob = "";
	string major = "";
	int salary = 0;

	vector<Person*> person;

	cout << "Please enter both student and instructor information.\n\n";
	cout << "Student's name: ";
	cin >> name;
	cout << "Student's date of birth (MM/DD/YYYY): ";
	cin >> dob;
	cout << "Student's major: ";
	cin >> major;
	
	person.push_back(new Student(name, dob, major));

	cout << "Instructor's name: ";
	cin >> name;
	cout << "Instructor's date of birth (MM/DD/YYY): ";
	cin >> dob;
	cout << "Instructor's salary: ";
	cin >> salary;

	person.push_back(new Instructor(name, dob, salary));

	for(int i = 0; i < person.size(); i++)
	{
		person[i]->print();
	}

	return 0;
}
