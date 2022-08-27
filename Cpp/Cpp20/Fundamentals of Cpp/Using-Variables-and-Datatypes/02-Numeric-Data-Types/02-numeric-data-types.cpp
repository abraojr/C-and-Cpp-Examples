#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int positive_int_extreme = 2147483647;
    int negative_int_extreme = -2147483648;

    cout << "Signed int values can range between: "
         << negative_int_extreme << " to " << positive_int_extreme << endl;

    positive_int_extreme = 2147483648;
    negative_int_extreme = -2147483649;

    cout << "If we exceed the range the results are strange: "
         << negative_int_extreme << " to " << positive_int_extreme << endl;

    cout << "These results are a long to int conversion." << endl;

    return 0;
}

/* OUTPUT
    Signed int values can range between: -2147483648 to 2147483647
    If we exceed the range the results are strange: 2147483647 to -2147483648
    These results are a long to int conversion.
*/