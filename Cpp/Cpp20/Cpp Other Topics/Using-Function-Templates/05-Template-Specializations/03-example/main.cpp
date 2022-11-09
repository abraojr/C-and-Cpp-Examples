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

     return 0;
}

/* OUTPUT
     Larger : std::string larger(std::string first, std::string second)
     looooooooooooooooooong string
     Smaller : std::string smaller(std::string first, std::string second)
     short string
*/