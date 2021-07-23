#ifndef UTIL_EMPLOYEE_H
#define UTIL_EMPLOYEE_H

#include "employee.h"

/*
  Define and add new employee object to vector emp
  @param emp, the vector that holds all employee objects
  @param name, both first and last name of employee
  @param salary, the salary of the employee
*/
void new_employee(std::vector<Employee>& emp, std::string& name, int& salary);

/*
  Begins to merge the first half and second half of the subvector
  @param emp, a vector that references the list of employees
  @param from, the beginning of the list which is 0
  @param mid, the middle of the list of employees
  @param to, the last element of the list of employees
*/
void merge(std::vector<Employee>& emp, int from, int mid, int to);

/*
  A recursive function that subdivides the vector into smaller subvectors
  then initiates the merge function.
  @param emp, the vector containing the list of employees
  @param from, the begging index of the employee list
  @param to, thje end index of the employeee list
*/
void merge_sort(std::vector<Employee>& emp, int from, int to);

/*
  Prints out the salary of the employee list
  @param emp, a vector containing the list of employees
*/
void print(std::vector<Employee>& emp);

#endif
