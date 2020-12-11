#include "P5_2.h"

PEmployee::PEmployee()
{
	salary = 0;
}

PEmployee::PEmployee(string employee_name, double initial_salary) : person_data(employee_name)
{
	salary = 0;
}

void PEmployee::set_salary(double new_salary)
{
	salary = new_salary;
}

double PEmployee::get_salary() const
{
	return salary;
}

string PEmployee::get_name() const
{
	return person_data.get_name();
}

