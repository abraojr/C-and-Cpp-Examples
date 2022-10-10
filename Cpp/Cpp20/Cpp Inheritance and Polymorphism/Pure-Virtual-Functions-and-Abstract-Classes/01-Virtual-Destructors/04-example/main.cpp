#include <iostream>
#include <memory>

#include "Employee.h"
#include "FulltimeEmployee.h"

using std::cout;
using std::endl;
using std::make_unique;
using std::unique_ptr;

void display_total_salary(const Employee &emp_ref)
{
    cout << emp_ref.get_total_salary() << endl
         << endl;
}

int main()
{
    Employee *emp_joan = new FulltimeEmployee{"Joan", 60000, 7};

    unique_ptr<Employee> emp_janice = make_unique<FulltimeEmployee>("Janice", 50000, 5.5);

    cout << "------ FulltimeEmployee ------" << endl;
    display_total_salary(*emp_joan);

    cout << "------ FulltimeEmployee ------" << endl;
    display_total_salary(*emp_janice);

    delete emp_joan;
    emp_joan = nullptr;

    return 0;
}

/* OUTPUT
    ------ FulltimeEmployee ------
    FulltimeEmployee: get_total_salary() Joan
    64200

    ------ FulltimeEmployee ------
    FulltimeEmployee: get_total_salary() Janice
    52750

    FulltimeEmployee object destructed: Joan
    FulltimeEmployee object destructed: Janice
*/