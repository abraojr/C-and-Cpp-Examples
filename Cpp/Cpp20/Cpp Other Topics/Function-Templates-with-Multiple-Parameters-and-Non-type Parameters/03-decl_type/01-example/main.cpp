#include <iostream>

#include "function_templates.h"

using std::cout;
using std::endl;

int main()
{
     cout << "Sum of 200.50 and 1800 = " << sum_of(200.50, 1800) << endl;
     cout << "Difference of 3500 and 3455 = " << difference_of(3500, 3455) << endl;

     return 0;
}

/* OUTPUT
     Sum of 200.50 and 1800 = 2000.5
     Difference of 3500 and 3455 = 45
*/