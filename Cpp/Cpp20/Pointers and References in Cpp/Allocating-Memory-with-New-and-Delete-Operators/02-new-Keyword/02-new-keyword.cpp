#include <iostream>

using std::cout;
using std::endl;

int main()
{
    // Initializes revenue_ptr with a nullptr
    double *revenue_ptr{};

    /* Requests memory from the free store for a double variable
    and initializes the double variable with a value*/
    revenue_ptr = new double{20308.345};

    cout << "Revenue is: " << *revenue_ptr << endl;

    delete revenue_ptr;

    return 0;
}

/* OUTPUT
    Revenue is: 20308.3
*/