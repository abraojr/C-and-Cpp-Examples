#include <iostream>

#include "Department.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    Department department;

    cout << "Enter department details: " << endl;
    cin >> department;

    cout << "------------------------------------" << endl;
    cout << department << endl;

    return 0;
}

/* OUTPUT
    Enter department details:
    Operations
    30
    150000
    ------------------------------------
    Department: Operations , Number of employees: 30, Salary budget: 150000
*/