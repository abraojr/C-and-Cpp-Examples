#include <iostream>
#include <string>

#include "function_templates.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
     int int_a = 876;
     int int_b = 2349;

     float float_a = 654.23;
     float float_b = 3213.11;

     cout << "Larger of 2349 and 876 is: " << *(larger(&int_a, &int_b)) << endl;

     cout << "Smaller of 3213.11 and 654.23 is: " << *(smaller(&float_a, &float_b)) << endl;

     return 0;
}

/* OUTPUT
     Larger of 2349 and 876 is: template T* larger(T* first, T* second)
     2349
     Smaller of 3213.11 and 654.23 is: template T* smaller(T* first, T* second)
     654.23
*/