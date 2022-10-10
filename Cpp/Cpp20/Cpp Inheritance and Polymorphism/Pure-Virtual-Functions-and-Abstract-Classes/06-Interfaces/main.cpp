#include <iostream>

#include "FulltimeEmployee.h"
#include "EngineeringEmployee.h"

using std::cout;
using std::endl;

int main()
{
    FulltimeEmployee emp_joe{"Joe", 50000, 7};
    EngineeringEmployee emp_nina{"Nina", 70000, 10, 30, 500};

    cout << "------ FulltimeEmployee ------" << endl;
    cout << "Total compensation: " << emp_joe.get_total_compensation() << endl;

    cout << "------ EngineeringEmployee ------" << endl;
    cout << "Total compensation: " << emp_nina.get_total_compensation() << endl;

    return 0;
}

/* OUTPUT
    ------ FulltimeEmployee ------
    Total compensation: 53500
    ------ EngineeringEmployee ------
    Total compensation: 92000
*/