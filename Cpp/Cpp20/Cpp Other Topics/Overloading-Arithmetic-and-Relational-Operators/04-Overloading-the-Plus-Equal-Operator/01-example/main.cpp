#include <iostream>

#include "Department.h"

using std::cout;
using std::endl;

int main()
{
    Department engineering("Softech", "engineering", 100, 2500000.00);
    Department operations("Softech", "ops", 23, 500000.00);

    engineering.show();
    operations.show();

    engineering += operations;

    engineering.show();

    return 0;
}

/* OUTPUT
    ------------------engineering (Softech) ------------------
    Employees: 100 salary budget: 2.5e+06

    ------------------ops (Softech) ------------------
    Employees: 23 salary budget: 500000

    ------------------engineering + ops (Softech) ------------------
    Employees: 123 salary budget: 3e+06
*/