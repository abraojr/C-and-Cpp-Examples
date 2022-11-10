#include <iostream>
#include <string>

#include "function_templates.h"

using std::cout;
using std::endl;
using std::string;

int main()
{

     string large_string = "looooooooooooooooooong string";
     string small_string = "short string";

     cout << "Larger : " << larger(large_string, small_string) << endl;
     cout << "Smaller : " << smaller(large_string, small_string) << endl;

     cout << "Larger (integers): " << larger(1120, 34) << endl;
     cout << "Smaller (doubles): " << smaller(5409.34, 567.29) << endl;

     return 0;
}

/* OUTPUT
     Larger : overloaded string larger(string first, string second)
     looooooooooooooooooong string
     Smaller : overloaded string smaller(string first, string second)
     short string
     Larger (integers): template T larger(T first, T second)
     1120
     Smaller (doubles): template T smaller(T first, T second)
     567.29
*/