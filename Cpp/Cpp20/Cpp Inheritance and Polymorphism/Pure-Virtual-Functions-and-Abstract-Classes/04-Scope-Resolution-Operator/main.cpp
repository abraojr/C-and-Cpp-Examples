#include <iostream>

#include "Employee.h"
#include "FulltimeEmployee.h"
#include "EngineeringEmployee.h"

using std::cout;
using std::endl;

int main()
{
    EngineeringEmployee emp_nina{"Nina", 70000, 10, 30, 500};
    EngineeringEmployee emp_joan{"Joan", 50000, 10, 45, 750};

    cout << "------ EngineeringEmployee ------" << endl;
    cout << "Total salary: " << emp_nina.get_total_salary() << endl;

    float base_salary = emp_joan.Employee::get_total_salary();
    float base_plus_bonus_salary = emp_joan.FulltimeEmployee::get_total_salary();
    float base_plus_bonus_plus_stock_salary = emp_joan.get_total_salary();

    cout << "------ EngineeringEmployee ------" << endl;
    cout << "Total salary: " << emp_joan.get_total_salary() << endl;
    cout << "Stock: " << base_plus_bonus_plus_stock_salary - base_plus_bonus_salary << endl;
    cout << "Bonus: " << base_plus_bonus_salary << endl;
    cout << "Base: " << base_salary << endl;

    return 0;
}

/* OUTPUT
    ------ EngineeringEmployee ------
    Total salary: EngineeringEmployee: get_total_salary() Nina
    FulltimeEmployee: get_total_salary() Nina
    Employee: get_total_salary() Nina
    92000
    Employee: get_total_salary() Joan
    FulltimeEmployee: get_total_salary() Joan
    Employee: get_total_salary() Joan
    EngineeringEmployee: get_total_salary() Joan
    FulltimeEmployee: get_total_salary() Joan
    Employee: get_total_salary() Joan
    ------ EngineeringEmployee ------
    Total salary: EngineeringEmployee: get_total_salary() Joan
    FulltimeEmployee: get_total_salary() Joan
    Employee: get_total_salary() Joan
    88750
    Stock: 33750
    Bonus: 55000
    Base: 50000
*/