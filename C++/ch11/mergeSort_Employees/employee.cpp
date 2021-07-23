#include "employee.h"

Employee::Employee()
{
    salary = 0;
}

Employee::Employee(std::string & name, int& salary)
{
    this->name = name;
    this->salary = salary;
}

int Employee::get_salary() const
{
    return salary;
}
