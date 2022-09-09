#include <iostream>
#include <memory>

using std::cout;
using std::endl;
using std::make_unique;
using std::unique_ptr;

int main()
{
    // Pre C++14 style of initializing unique pointers
    unique_ptr<double> revenue_ptr_1{new double{2345.98}};

    /*Modern style of initializing unique pointers - this function
    prevents some subtle memory leaks*/
    unique_ptr<double> revenue_ptr_2{make_unique<double>(100345.67)};

    // Compact modern style of initializing unique pointers
    auto revenue_ptr_3{make_unique<double>(48572.76)};

    cout << "Revenue 1: " << *revenue_ptr_1 << endl;
    cout << "Revenue 2: " << *revenue_ptr_2 << endl;
    cout << "Revenue 3: " << *revenue_ptr_3 << endl;

    return 0;
}

/* OUTPUT
    Revenue 1: 2345.98
    Revenue 2: 100346
    Revenue 3: 48572.8
*/