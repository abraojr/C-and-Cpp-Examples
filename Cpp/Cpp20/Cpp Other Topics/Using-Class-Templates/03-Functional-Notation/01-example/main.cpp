#include <iostream>
#include <string>

#include "Stack.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
     Stack string_stack{100};
     Stack integer_stack{25};
     Stack float_stack{30};

     return 0;
}

/* OUTPUT
     Braced initialization list constructor num elements: 1
     Braced initialization list constructor num elements: 1
     Braced initialization list constructor num elements: 1
*/