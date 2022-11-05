#include <iostream>
#include <string>
#include <string_view>

using std::cout;
using std::endl;
using std::string;
using std::string_view;

// Function template prototype
template <typename T>
T larger(T first, T second);

int main()
{
    cout << "Larger of 10 and 23 is: " << larger<double>(10.11, 23) << endl;

    cout << "Larger of 111 and 76 is: " << larger<float>(111, 76.34f) << endl;

    cout << "Larger of 111.34 and 76.87 is: " << larger<long>(111l, 76) << endl;

    string alice = "Alice";
    string_view zoe{"Zoe"};

    cout << "Larger of 'Alice' and 'Zoe' is: " << larger<string_view>(alice, zoe) << endl;

    return 0;
}

// Function template definition
template <typename T>
T larger(T first, T second)
{
    return first > second ? first : second;
}

/* OUTPUT
    Larger of 10 and 23 is: 23
    Larger of 111 and 76 is: 111
    Larger of 111.34 and 76.87 is: 111
    Larger of 'Alice' and 'Zoe' is: Zoe
*/