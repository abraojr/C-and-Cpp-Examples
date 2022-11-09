#include <iostream>

#include "function_templates.h"

using std::cout;
using std::endl;

int main()
{

     cout << "Larger : " << larger("Zoe", "Alice") << endl;

     cout << "Smaller : " << smaller("Hector", "Bob") << endl;

     return 0;
}

/* OUTPUT
     Larger : const char *larger(const char *first, const char *second)
     Alice
     Smaller : const char *smaller(const char *first, const char *second)
     Bob
*/