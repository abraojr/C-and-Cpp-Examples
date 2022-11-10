#include <iostream>

#include "function_templates.h"

using std::cout;
using std::endl;

int main()
{
     cout << "Sum of 2000.0 and 2000 = " << sum_of(2000.0, 2000) << endl;
     cout << "Difference of 4000 and 4000 = " << difference_of(4000, 4000) << endl;

     return 0;
}

/* OUTPUT
     Sum of 2000.0 and 2000 = 4000
     Difference of 4000 and 4000 = 0
*/