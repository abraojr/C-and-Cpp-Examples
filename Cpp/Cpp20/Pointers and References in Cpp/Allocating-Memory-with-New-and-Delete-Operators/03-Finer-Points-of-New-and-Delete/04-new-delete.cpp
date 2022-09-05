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

    revenue_ptr_1 = nullptr;
    revenue_ptr_2 = nullptr;

    delete revenue_ptr_1;
    delete revenue_ptr_2;

    return 0;
}

/* OUTPUT
    Revenue 1: 24500.9
    Revenue 2: 100887
*/