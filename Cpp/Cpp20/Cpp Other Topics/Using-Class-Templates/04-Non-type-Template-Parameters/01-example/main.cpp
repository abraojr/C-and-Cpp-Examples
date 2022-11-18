#include <iostream>
#include <string>

#include "Stack.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
     Stack<int, 20> integer_stack;

     cout << "Integer stack max size: " << integer_stack.get_max_size()
          << " current size: " << integer_stack.get_current_size() << endl;

     integer_stack.push(10);
     integer_stack.push(20);
     integer_stack.push(30);
     integer_stack.push(40);

     cout << "****** After adding elements ******" << endl;
     cout << "Integer stack max size: " << integer_stack.get_max_size()
          << " current size: " << integer_stack.get_current_size() << endl;

     int top_element_1 = integer_stack.pop();
     cout << "Top element popped: " << top_element_1 << endl;

     int top_element_2 = integer_stack.pop();
     cout << "Top element popped: " << top_element_2 << endl;

     cout << "****** After popping elements ******" << endl;
     cout << "Integer stack max size: " << integer_stack.get_max_size()
          << " current size: " << integer_stack.get_current_size() << endl;

     return 0;
}

/* OUTPUT
     Integer stack max size: 20 current size: 0
     ****** After adding elements ******
     Integer stack max size: 20 current size: 4
     Top element popped: 40
     Top element popped: 30
     ****** After popping elements ******
     Integer stack max size: 20 current size: 2
*/