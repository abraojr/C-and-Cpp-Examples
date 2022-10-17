#include <iostream>

#include "Department.h"

using std::cout;
using std::endl;

int main()
{
    Department engineering("Softech", "engineering", 5, 250000);
    Department operations("Softech", "ops", 10, 300000.00);

    operations.show();

    Department original_ops = operations++;

    cout << "******************* After post-increment *******************" << endl << endl;
    operations.show();
    original_ops.show();

    return 0;
}

/* OUTPUT
    ------------------ops (Softech) ------------------
    Employees: 10 salary budget: 300000

    Postfix increment: operator++(int) called
    ******************* After post-increment *******************

    ------------------ops (Softech) ------------------
    Employees: 11 salary budget: 330000

    ------------------ops (Softech) ------------------
    Employees: 10 salary budget: 300000
*/