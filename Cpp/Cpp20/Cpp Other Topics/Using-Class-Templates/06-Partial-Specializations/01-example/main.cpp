#include <iostream>
#include <string>

#include "Container.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
    int int_var = 1000;
    int another_int_var = 100;
    Container<int *> int_ptr_container{&int_var};
    Container<int *> another_int_ptr_container{&another_int_var};

    if (int_ptr_container < another_int_ptr_container)
    {
        cout << "int_ptr_container is less than another_int_ptr_container" << endl;
    }

    if (int_ptr_container > another_int_ptr_container)
    {
        cout << "int_ptr_container is greater than another_int_ptr_container" << endl;
    }

    return 0;
}

/* OUTPUT
    Specialized T* template: 0x505358
    Specialized T* template: 0x505354
    Specialized T* template operator<()
    Specialized T* template operator>()
    int_ptr_container is greater than another_int_ptr_container
*/