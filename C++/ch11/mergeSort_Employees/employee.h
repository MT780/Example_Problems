#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
#include <vector>

class Employee
{
    public:
    //Defautl constructor in case no parameters are provided.
    Employee();

    /*
      Default constructor that initializes employee
      @param name, is the first and last name of employee
      @param salary, is the salary of the employee
    */
    Employee(std::string& name, int& salary);
    
    /*
      Returns salary
    */
    int get_salary() const;

    private:
    std::string name;
    int salary;
};
#endif