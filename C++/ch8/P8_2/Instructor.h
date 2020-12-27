#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"

class Instructor : public Person
{
	public:
		//Default constructor
		Instructor();

		//Assigns name, birthday, and salary of the Instructor
		//@param name the name of instructor
		//@param b_day, the birthday of the instructor
		//@param salary, the amount the instructor makes
		Instructor(const string& name, const string& b_day, const int& salary);

		//See how much the instructor makes
		//@return the instructor's salary
		int get_salary() const;

		//Print instructor's information
		virtual void print();

	private:
		int salary;
};

#endif
