#include <iostream>
#include <string>

#include "Stack.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
     Stack<string, 10> string_stack_10;
     Stack<string, 100> string_stack_100;

     cout << "string_stack_10 max size: " << string_stack_10.get_max_size()
          << " current size: " << string_stack_10.get_current_size() << endl;

     cout << "string_stack_100 max size: " << string_stack_100.get_max_size()
          << " current size: " << string_stack_100.get_current_size() << endl;

     return 0;
}

/* OUTPUT
     string_stack_10 max size: 10 current size: 0
     string_stack_100 max size: 100 current size: 0

*/