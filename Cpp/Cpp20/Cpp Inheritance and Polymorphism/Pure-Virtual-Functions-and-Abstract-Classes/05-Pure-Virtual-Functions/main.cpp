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
    Total compensation: FulltimeEmployee: get_salary() Joe
    FulltimeEmployee: get_salary() Joe
    53500
    ------ EngineeringEmployee ------
    Total compensation: FulltimeEmployee: get_salary() Nina
    EngineeringEmployee: get_stock_compensation() Nina
    92000
*/