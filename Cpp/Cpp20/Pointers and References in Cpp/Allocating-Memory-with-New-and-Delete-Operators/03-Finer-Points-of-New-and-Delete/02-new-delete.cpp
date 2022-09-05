#include <iostream>

using std::cout;
using std::endl;

int main()
{
    double *revenue_ptr_1{new double{24500.89}};

    double *revenue_ptr_2{new double{100887.33}};

    cout << "Revenue 1: " << *revenue_ptr_1 << endl;
    cout << "Revenue 2: " << *revenue_ptr_2 << endl;

    delete revenue_ptr_1;
    delete revenue_ptr_2;

    cout << "Revenue 1 (after deallocation): " << *revenue_ptr_1 << endl;
    cout << "Revenue 2 (after deallocation): " << *revenue_ptr_2 << endl;

    return 0;
}

/* OUTPUT
    Revenue 1: 24500.9
    Revenue 2: 100887
    Revenue 1 (after deallocation): 3.20421e-310
    Revenue 2 (after deallocation): 100887
*/