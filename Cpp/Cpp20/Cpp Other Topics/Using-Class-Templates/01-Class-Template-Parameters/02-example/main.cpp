#include <iostream>
#include <string>

#include "Stack.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
    Stack<int> integer_stack;
    Stack<float> float_stack{20};
    Stack<string> string_stack{100};

    cout << "Integer stack max size: " << integer_stack.get_max_size()
         << " current size: " << integer_stack.get_current_size() << endl;

    cout << "Float stack max size: " << float_stack.get_max_size()
         << " current size: " << float_stack.get_current_size() << endl;

    cout << "String stack max size: " << string_stack.get_max_size()
         << " current size: " << string_stack.get_current_size() << endl;

    return 0;
}

/* OUTPUT
    Integer stack max size: 10 current size: 0
    Float stack max size: 20 current size: 0
    String stack max size: 100 current size: 0
*/