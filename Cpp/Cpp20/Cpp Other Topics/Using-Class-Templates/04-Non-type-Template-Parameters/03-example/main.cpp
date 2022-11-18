#include <iostream>
#include <string>

#include "Stack.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
     Stack<> string_stack_100;
     string_stack_100.push("Veronica");

     cout << "string_stack_100 max size: " << string_stack_100.get_max_size()
          << " current size: " << string_stack_100.get_current_size() << endl;

     Stack<float> float_stack_100;
     float_stack_100.push(23.45f);

     cout << "float_stack_100 max size: " << float_stack_100.get_max_size()
          << " current size: " << float_stack_100.get_current_size() << endl;

     Stack<int, 13> int_stack_13;
     int_stack_13.push(23);

     cout << "int_stack_13 max size: " << int_stack_13.get_max_size()
          << " current size: " << int_stack_13.get_current_size() << endl;

     return 0;
}

/* OUTPUT
     string_stack_100 max size: 100 current size: 1
     float_stack_100 max size: 100 current size: 1
     int_stack_13 max size: 13 current size: 1
*/