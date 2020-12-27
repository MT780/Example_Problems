#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person
{
	public:
		//Default Constructor
		Student();

		//Provides student information
		//@param name the student's name
		//@param b_day the student's birthday
		//@param major the student's major
		Student(const string& name, const string& b_day, const string& major);

		//Provides student's major
		//@return the student's discipline
		string get_major() const;

		//Prints student's information
		virtual void print();

	private:
		string major;
};

#endif
