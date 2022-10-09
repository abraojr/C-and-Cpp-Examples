#include <iostream>

#include "Employee.h"
#include "FulltimeEmployee.h"

using std::cout;
using std::endl;

void display_total_salary(const Employee &emp_ref)
{
    cout << emp_ref.get_total_salary() << endl;
    cout << "-----------------------------" << endl;
}

int main()
{
    Employee emp_joan{"parttime", "Joan", 20000};
    FulltimeEmployee emp_janice{"Janice", 50000, 5.5};

    cout << "------ Employee ------" << endl;
    display_total_salary(emp_joan);

    cout << "------ FulltimeEmployee ------" << endl;
    display_total_salary(emp_janice);

    return 0;
}

/* OUTPUT
    ------ Employee ------
    Employee: get_total_salary() Joan
    20000
    -----------------------------
    ------ FulltimeEmployee ------
    FulltimeEmployee: get_total_salary() Janice
    52750
    -----------------------------
*/