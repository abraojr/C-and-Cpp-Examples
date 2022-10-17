#include <iostream>

#include "Department.h"

using std::cout;
using std::endl;

int main()
{
    Department engineering_backend("Softech", "backend-engineering", 5, 250000);
    Department engineering_frontend("Softech", "frontend-engineering", 10, 300000.00);

    engineering_backend.show();
    engineering_frontend.show();

    ++engineering_backend = engineering_frontend;

    cout << "******************* After pre-increment and assignment *******************" << endl << endl;
    engineering_backend.show();
    engineering_frontend.show();

    return 0;
}

/* OUTPUT
    ------------------backend-engineering (Softech) ------------------
    Employees: 5 salary budget: 250000

    ------------------frontend-engineering (Softech) ------------------
    Employees: 10 salary budget: 300000

    Prefix increment: operator++() called
    ******************* After pre-increment and assignment *******************

    ------------------frontend-engineering (Softech) ------------------
    Employees: 10 salary budget: 300000

    ------------------frontend-engineering (Softech) ------------------
    Employees: 10 salary budget: 300000
*/