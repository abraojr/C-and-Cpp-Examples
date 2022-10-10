#include <iostream>

#include "Employee.h"
#include "FulltimeEmployee.h"

using std::cout;
using std::endl;

int main()
{
    FulltimeEmployee emp_janice{"Janice", 50000, 10};

    cout << "------ FulltimeEmployee ------" << endl;
    cout << "Total salary: " << emp_janice.get_total_salary() << endl;
    cout << "------------------------------" << endl;

    return 0;
}

/* OUTPUT
    Employee object constructed: Janice
    Total salary: Employee: get_total_salary() Janice
    50000
    ------ FulltimeEmployee ------
    Total salary: FulltimeEmployee: get_total_salary() Janice
    55000
    ------------------------------
    Employee object destructed: Janice
    Total salary: Employee: get_total_salary() Janice
    50000
*/