#include <iostream>

#include "Department.h"

using std::cout;
using std::endl;

int main()
{
    Department engineering("Softech", "engineering", 50, 2000000.00);
    Department operations("Softech", "ops", 23, 500000.00);

    engineering.show();
    operations.show();

    Department engineering_ops = engineering + operations;

    engineering_ops.show();

    return 0;
}

/* OUTPUT
    ------------------engineering (Softech) ------------------
    Employees: 50 salary budget: 2e+06

    ------------------ops (Softech) ------------------
    Employees: 23 salary budget: 500000

    ------------------engineering + ops (Softech) ------------------
    Employees: 73 salary budget: 2.5e+06
*/