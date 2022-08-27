#include <iostream>

using std::cout;
using std::endl;

int main()
{
    cout << "Size of unsigned int is " << sizeof(unsigned int) << " bytes." << endl;

    unsigned int low_val = 0;
    unsigned int high_val = 4294967295; // 2147483647 + 2147483648

    cout << "Unsigned int values can range between: "
         << low_val << " to " << high_val << endl;

    return 0;
}

/* OUTPUT
    Size of unsigned int is 4 bytes.
    Unsigned int values can range between: 0 to 4294967295
*/