#include <iostream>

#include "Employee.h"
#include "FulltimeEmployee.h"
#include "ContractEmployee.h"

using std::cout;
using std::endl;

int main()
{
    Employee emp_joan{"parttime", "Joan", 20000};
    FulltimeEmployee emp_janice{"Janice", 50000, 5.5};
    ContractEmployee emp_terence{"Terence", 60000, 10, 200};

    cout << "------ Employee ------" << endl;
    cout << emp_joan.get_total_salary() << endl;

    cout << "------ FulltimeEmployee ------" << endl;
    cout << emp_janice.get_total_salary() << endl;

    cout << "------ ContractEmployee ------" << endl;
    cout << emp_terence.get_total_salary() << endl;

    return 0;
}

/* OUTPUT
    ------ Employee ------
    Employee: get_total_salary() Joan
    20000
    ------ FulltimeEmployee ------
    FulltimeEmployee: get_total_salary() Janice
    52750
    ------ ContractEmployee ------
    ContractEmployee: get_total_salary() Terence
    62000
*/