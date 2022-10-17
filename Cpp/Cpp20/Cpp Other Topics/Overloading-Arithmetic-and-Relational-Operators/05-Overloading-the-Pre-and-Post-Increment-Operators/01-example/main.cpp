#include <iostream>

#include "Department.h"

using std::cout;
using std::endl;

int main()
{
    Department engineering("Softech", "engineering", 5, 250000);
    Department operations("Softech", "ops", 10, 300000.00);

    engineering.show();
    ++engineering;

    cout << "******************* After pre-increment *******************" << endl << endl;
    engineering.show();

    operations.show();
    operations++;

    cout << "******************* After post-increment *******************" << endl << endl;
    operations.show();

    return 0;
}

/* OUTPUT
    ------------------engineering (Softech) ------------------
    Employees: 5 salary budget: 250000

    Prefix increment: operator++() called
    ******************* After pre-increment *******************

    ------------------engineering (Softech) ------------------
    Employees: 6 salary budget: 300000

    ------------------ops (Softech) ------------------
    Employees: 10 salary budget: 300000

    Postfix increment: operator++(int) called
    ******************* After post-increment *******************

    ------------------ops (Softech) ------------------
    Employees: 11 salary budget: 330000
*/