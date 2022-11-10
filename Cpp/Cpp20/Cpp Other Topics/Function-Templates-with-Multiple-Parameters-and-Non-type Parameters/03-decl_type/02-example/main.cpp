#include <iostream>

#include "function_templates.h"

using std::cout;
using std::endl;

int main()
{
     cout << "Sum of 1200.35 and 1800 = " << sum_of(1200.35, 1800) << endl;
     cout << "Difference of 4000 and 3455 = " << difference_of(4000, 3455) << endl;

     return 0;
}

/* OUTPUT
     Sum of 1200.35 and 1800 = 3000.35
     Difference of 4000 and 3455 = 545
*/