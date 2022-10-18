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

    auto &instream_1 = cin >> dept;
    auto &instream_2 = instream_1 >> num_employees;
    auto &instream_3 = instream_2 >> salary_budget;

    Department department(dept, num_employees, salary_budget);

    cout << "-------------------------------" << endl;

    auto &ostream_1 = cout << "Department: ";
    auto &ostream_2 = ostream_1 << department.get_name();
    auto &ostream_3 = ostream_2 << " Number of employees: ";
    auto &ostream_4 = ostream_3 << department.get_num_employees();
    auto &ostream_5 = ostream_4 << " Salary budget: ";
    auto &ostream_6 = ostream_5 << department.get_salary_budget();
    auto &ostream_7 = ostream_6 << endl;

    return 0;
}

/* OUTPUT
    Enter department details:
    Operations
    15
    1000000
    -------------------------------
    Department: Operations Number of employees: 15 Salary budget: 1e+06
*/