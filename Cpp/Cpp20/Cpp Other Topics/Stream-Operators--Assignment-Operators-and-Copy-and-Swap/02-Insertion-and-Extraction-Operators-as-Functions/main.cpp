#include <iostream>
#include <string>

#include "Department.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

using std::istream;
using std::ostream;
using std::operator<<;
using std::operator>>;

int main()
{
    string dept;
    int num_employees;
    float salary_budget;

    cout << "Enter department details: " << endl;

    istream &instream_1 = operator>>(cin, dept);
    istream &instream_2 = instream_1.operator>>(num_employees);
    istream &instream_3 = instream_2.operator>>(salary_budget);

    Department department(dept, num_employees, salary_budget);

    cout << "-------------------------------" << endl;

    ostream &ostream_1 = operator<<(cout, "Department: ");
    ostream &ostream_2 = operator<<(ostream_1, department.get_name());
    ostream &ostream_3 = operator<<(ostream_2, " Number of employees: ");
    ostream &ostream_4 = ostream_3.operator<<(department.get_num_employees());
    ostream &ostream_5 = operator<<(ostream_4, " Salary budget: ");
    ostream &ostream_6 = ostream_5.operator<<(department.get_salary_budget());
    ostream &ostream_7 = ostream_6.operator<<(endl);

    return 0;
}

/* OUTPUT
    Enter department details:
    Operations
    25
    2500000
    -------------------------------
    Department: Operations Number of employees: 25 Salary budget: 2.5e+06
*/