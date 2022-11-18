#include <iostream>
#include <string>

#include "Stack.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
     Stack<string> string_stack{100};
     Stack<int> integer_stack(25);
     Stack<float> float_stack(30);

     return 0;
}

/* OUTPUT
     Constructor with max_size: 100
     Constructor with max_size: 25
     Constructor with max_size: 30
*/