#include <iostream>

#include "Employee.h"
#include "ContractEmployee.h"

using std::cout;
using std::endl;

int main()
{
    ContractEmployee emp_terence{"Terence", 60000, 10, 200};

    cout << "------ ContractEmployee ------" << endl;
    cout << "Name: " << emp_terence.get_name() << endl;
    cout << "Total salary: " << emp_terence.get_total_salary() << endl;

    Employee emp = emp_terence;

    cout << "------ ContractEmployee (sliced!) ------" << endl;
    cout << "Name: " << emp.get_name() << endl;
    cout << "Total salary: " << emp.get_total_salary() << endl;

    return 0;
}

/* OUTPUT
    ------ ContractEmployee ------
    Name: Terence
    Total salary: ContractEmployee: get_total_salary() Terence
    62000
    ------ ContractEmployee (sliced!) ------
    Name: Terence
    Total salary: Employee: get_total_salary() Terence
    60000
    Employee object destructed: Terence
    ContractEmployee object destructed: Terence
    Employee object destructed: Terence
*/