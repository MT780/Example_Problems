#ifndef P5_2_H
#define P5_2_H

#include <iostream>
#include <string>
#include "P5_1.h"

using namespace std;

class PEmployee 
{
	public:
		PEmployee();
		PEmployee(string employee_name, double initial_salary);
		void set_salary(double new_salary);
		double get_salary() const;
		string get_name() const;

		

	private:
		Person person_data;
		double salary;
};

#endif
