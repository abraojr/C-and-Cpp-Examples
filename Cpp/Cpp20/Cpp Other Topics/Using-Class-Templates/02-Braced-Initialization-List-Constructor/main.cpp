#include <iostream>
#include <string>

#include "Stack.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
     Stack<string> string_stack{"Alisson", "Betty", "Clara", "Damon"};
     Stack<int> integer_stack{10, 20, 30};
     Stack<float> float_stack{10.1, 20.2, 30.3, 40.4, 50.5};

     cout << "--------------------------------" << endl;
     cout << "String stack max size: " << string_stack.get_max_size()
          << " current size: " << string_stack.get_current_size() << endl;

     auto *string_elements = string_stack.get_elements();
     for (int i = 0; i < string_stack.get_current_size(); i++)
     {
          cout << string_elements[i] << endl;
     }

     cout << "--------------------------------" << endl;
     cout << "Integer stack max size: " << integer_stack.get_max_size()
          << " current size: " << integer_stack.get_current_size() << endl;

     auto *integer_elements = integer_stack.get_elements();
     for (int i = 0; i < integer_stack.get_current_size(); i++)
     {
          cout << integer_elements[i] << endl;
     }

     cout << "--------------------------------" << endl;
     cout << "Float stack max size: " << float_stack.get_max_size()
          << " current size: " << float_stack.get_current_size() << endl;

     auto *float_elements = float_stack.get_elements();
     for (int i = 0; i < float_stack.get_current_size(); i++)
     {
          cout << float_elements[i] << endl;
     }

     return 0;
}

/* OUTPUT
     Braced initialization list constructor num elements: 4
     Braced initialization list constructor num elements: 3
     Braced initialization list constructor num elements: 5
     --------------------------------
     String stack max size: 4 current size: 4
     Alisson
     Betty
     Clara
     Damon
     --------------------------------
     Integer stack max size: 3 current size: 3
     10
     20
     30
     --------------------------------
     Float stack max size: 5 current size: 5
     10.1
     20.2
     30.3
     40.4
     50.5
*/