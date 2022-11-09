#include <iostream>

#include "function_templates.h"

using std::cout;
using std::endl;

int main()
{
    int int_a = 876;
    int int_b = 2349;

    float float_a = 654.23;
    float float_b = 3213.11;

    cout << "Larger of 2349 and 876 (using integers) is: "
         << larger(int_a, int_b) << endl;

    cout << "Larger of 2349 and 876 (using pointers) is: "
         << *(larger(&int_a, &int_b)) << endl;

    cout << "Smaller of 3213.11 and 654.23 (using floats) is: "
         << smaller(float_a, float_b) << endl;

    cout << "Smaller of 3213.11 and 654.23 (using pointers) is: "
         << *(smaller(&float_a, &float_b)) << endl;

    return 0;
}

/* OUTPUT
    Larger of 2349 and 876 (using integers) is: T larger(T first, T second)
    2349
    Larger of 2349 and 876 (using pointers) is: int* larger(int* first, int* second)
    2349
    Smaller of 3213.11 and 654.23 (using floats) is: T smaller(T first, T second)
    654.23
    Smaller of 3213.11 and 654.23 (using pointers) is: float* smaller(float* first, float* second)
    654.23
*/