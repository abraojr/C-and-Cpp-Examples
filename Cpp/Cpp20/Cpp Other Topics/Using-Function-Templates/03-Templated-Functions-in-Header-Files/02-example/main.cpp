#include <iostream>
#include <string>
#include <vector>

#include "function_templates.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
    decorative_display("Heidi");
    decorative_display(123);

    return 0;
}

/* OUTPUT
    **********************
    Heidi
    **********************
    **********************
    123
    **********************
*/