#include "util_Employee.h"

void new_employee(std::vector<Employee>& emp, std::string& name, int& salary)
{    
    std::cin.ignore(256, '\n');
    std::cout << "Enter name of employee: ";
    getline(std::cin, name);

    std::cout << "Enter employee's salary: ";
    std::cin >> salary;

    emp.push_back(Employee(name, salary));
}

void merge(std::vector<Employee>& emp, int from, int mid, int to)
{
    int n = to - from + 1;

    std::vector<Employee> temp(n);

    int i1 = from;
    int i2 = mid + 1;
    int j = 0;

    while(i1 <= mid && i2 <= to)
    {
        if(emp[i1].get_salary() < emp[i2].get_salary())
        {
            temp[j] = emp[i1];
            i1++;
        }
        else
        {
            temp[j] = emp[i2];
            i2++;
        }
        j++;
    }

    while(i1 <= mid)
    {
        temp[j] = emp[i1];
        i1++;
        j++;
    }

    while(i2 <= to)
    {
        temp[j] = emp[i2];
        i2++;
        j++;
    }

    for (j = 0; j < n; j++)
        emp[from + j] = temp[j];
}

void merge_sort(std::vector<Employee>& emp, int from, int to)
{
    if(from == to) return;
    int mid = (from + to) / 2;

    merge_sort(emp, from, mid);
    merge_sort(emp, mid + 1, to);
    merge(emp, from, mid, to);
}

void print(std::vector<Employee>& emp)
{
    for (int i = 0; i < emp.size(); i++)
        std::cout << emp[i].get_salary() << " ";

    std::cout << std::endl;    
}