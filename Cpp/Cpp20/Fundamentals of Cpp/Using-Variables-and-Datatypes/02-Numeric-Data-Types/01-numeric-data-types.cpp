#include <iostream>

using std::cout;
using std::endl;

int main()
{
    cout << "Size of int is " << sizeof(int) << " bytes." << endl;

    int positive_int_extreme = 2147483647;

    int negative_int_extreme = -2147483648;

    cout << "Signed int values can range between: "
         << negative_int_extreme << " to " << positive_int_extreme << endl;

    return 0;
}

/* OUTPUT
    Size of int is 4 bytes.
    Signed int values can range between: -2147483648 to 2147483647
*/