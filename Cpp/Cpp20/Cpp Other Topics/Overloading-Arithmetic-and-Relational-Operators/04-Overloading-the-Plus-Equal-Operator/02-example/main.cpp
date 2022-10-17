#include <iostream>

#include "Department.h"

using std::cout;
using std::endl;

int main()
{
    Department engineering("Softech", "engineering", 100, 2500000.00);
    Department operations("Softech", "ops", 23, 500000.00);
    Department hr("Softech", "hr", 4, 150000.00);

    engineering.show();
    operations.show();
    hr.show();

    (engineering += operations) += hr;

    engineering.show();
    operations.show();
    hr.show();

    return 0;
}

/* OUTPUT
    ------------------engineering (Softech) ------------------
    Employees: 100 salary budget: 2.5e+06

    ------------------ops (Softech) ------------------
    Employees: 23 salary budget: 500000

    ------------------hr (Softech) ------------------
    Employees: 4 salary budget: 150000

    ------------------engineering + ops + hr (Softech) ------------------
    Employees: 127 salary budget: 3.15e+06

    ------------------ops (Softech) ------------------
    Employees: 23 salary budget: 500000

    ------------------hr (Softech) ------------------
    Employees: 4 salary budget: 150000
*/