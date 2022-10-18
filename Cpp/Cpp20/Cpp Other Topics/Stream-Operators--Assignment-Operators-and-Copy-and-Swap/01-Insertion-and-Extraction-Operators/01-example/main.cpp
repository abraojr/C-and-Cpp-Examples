#include <iostream>
#include <string>

#include "Department.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string dept;
    int num_employees;
    float salary_budget;

    cout << "Enter department details: " << endl;
    cin >> dept >> num_employees >> salary_budget;

    Department department(dept, num_employees, salary_budget);

    cout << "Department: " << department.get_name()
         << " Number of employees: " << department.get_num_employees()
         << " Salary budget: " << department.get_salary_budget() << endl;

    return 0;
}

/* OUTPUT
    Enter department details:
    Operations
    8
    500000
    Department: Operations Number of employees: 8 Salary budget: 500000
*/