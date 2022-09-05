#include <iostream>

using std::cout;
using std::endl;

int main()
{
    /* Pointer initialized with memory on the free store points to a
    variable which is initialized to 0.0*/
    double *revenue_ptr_1 = {new double{}};

    /* Pointer initialized with nullptr. Has not been allocated
    any memory on the free store*/
    double *revenue_ptr_2{};

    cout << "Revenue pointer 1: " << revenue_ptr_1 << endl;
    cout << "Revenue pointer 2: " << revenue_ptr_2 << endl;

    delete revenue_ptr_1;
    delete revenue_ptr_2;

    return 0;
}

/* OUTPUT
    Revenue pointer 1: 0x505368
    Revenue pointer 2: 0
*/