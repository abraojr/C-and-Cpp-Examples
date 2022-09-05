#include <iostream>

using std::cout;
using std::endl;

int main()
{
    double *revenue_ptr = (double *)malloc(sizeof(double));

    cout << "Uninitialized revenue: " << *revenue_ptr << endl;

    free(revenue_ptr);

    return 0;
}

/* OUTPUT
    Uninitialized revenue: 0
*/