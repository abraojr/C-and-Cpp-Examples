#include <iostream>

#include "Employee.h"
#include "ContractEmployee.h"

using std::cout;
using std::endl;

void display_total_salary(Employee emp)
{
    cout << emp.get_total_salary() << endl << endl;
}

int main()
{
    ContractEmployee emp_terence{"Terence", 60000, 10, 200};

    cout << "------ ContractEmployee ------" << endl;
    cout << "Name: " << emp_terence.get_name() << endl;
    cout << "Total salary: " << emp_terence.get_total_salary() << endl;

    cout << "****** Pass-by-value into function ******" << endl;
    cout << "------ ContractEmployee (sliced!) ------" << endl;
    cout << "Name: " << emp_terence.get_name() << endl;
    display_total_salary(emp_terence);
    cout << "****** Local copy in function destructed ******" << endl;

    return 0;
}

/* OUTPUT
    ------ ContractEmployee ------
    Name: Terence
    Total salary: ContractEmployee: get_total_salary() Terence
    62000
    ****** Pass-by-value into function ******
    ------ ContractEmployee (sliced!) ------
    Name: Terence
    Employee: get_total_salary() Terence
    60000

    Employee object destructed: Terence
    ****** Local copy in function destructed ******
    ContractEmployee object destructed: Terence
    Employee object destructed: Terence
*/