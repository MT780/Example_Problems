//Exercise P11.4
//Merge sort a vector of employeees by their salary.
#include "employee.h"
#include "util_Employee.h"

int main()
{
    std::vector<Employee> emp;
    std::string answer = "";
    std::string name = "";
    int salary = 0;

    std::cout << "Would you like to insert new employee? (Y/N)" << std::endl;
    std::cin >> answer;
    std::cin.ignore(256, '\n');

    while(answer == "Y" || answer == "y")
    {
        new_employee(emp, name, salary);

        name = "";
        salary = 0;
        answer = "";

        std::cout << "Would you like to insert new employee? (Y/N)" << std::endl;
        std::cin >> answer;

    }

    std::cout << "Would you like to sort current list of employees? (Y/N)" << std::endl;
    std::cin >> answer;

    if (answer == "Y" || answer == "y")
    {
        merge_sort(emp, 0, emp.size() -1);

        std::cout << "Print of the sorted list:" << std::endl;
        print(emp);
    }

    return 0;
}