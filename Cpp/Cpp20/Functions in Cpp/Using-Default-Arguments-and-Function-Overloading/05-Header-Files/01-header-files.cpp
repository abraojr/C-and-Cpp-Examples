#include <iostream>
#include "math-utility.h"

using std::cout;
using std::endl;

int main()
{
    cout << "7 to power 3: " << power_of(7, 3) << endl;
    cout << "11 to power 4: " << power_of(11, 4) << endl;

    cout << "is prime 19: " << std::boolalpha << is_prime(19) << endl;
    cout << "is prime 39: " << std::boolalpha << is_prime(39) << endl;

    return 0;
}

/* OUTPUT
    7 to power 3: 343
    11 to power 4: 14641
    is prime 19: true
    is prime 39: false
*/