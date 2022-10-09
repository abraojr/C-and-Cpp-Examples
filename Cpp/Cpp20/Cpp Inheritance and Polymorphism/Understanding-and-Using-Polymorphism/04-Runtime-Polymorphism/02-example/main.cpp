#include <iostream>

#include "Employee.h"
#include "FulltimeEmployee.h"
#include "ContractEmployee.h"

using std::cout;
using std::endl;

void display_total_salary(Employee *emp_ptr)
{
    cout << emp_ptr->get_total_salary() << endl;
    cout << "----------------------------------" << endl;
}

int main()
{
    Employee emp_joan{"parttime", "Joan", 20000};
    FulltimeEmployee emp_janice{"Janice", 50000, 5.5};
    ContractEmployee emp_terence{"Terence", 60000, 10, 200};

    cout << "------ Employee ------" << endl;
    display_total_salary(&emp_joan);

    cout << "------ FulltimeEmployee ------" << endl;
    display_total_salary(&emp_janice);

    cout << "------ ContractEmployee ------" << endl;
    display_total_salary(&emp_terence);

    return 0;
}

/* OUTPUT
    ------ Employee ------
    Employee: get_total_salary() Joan
    20000
    ----------------------------------
    ------ FulltimeEmployee ------
    FulltimeEmployee: get_total_salary() Janice
    52750
    ----------------------------------
    ------ ContractEmployee ------
    ContractEmployee: get_total_salary() Terence
    62000
    ----------------------------------
*/