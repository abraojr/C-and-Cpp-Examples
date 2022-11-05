#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

// Function template prototype
template <class some_type>
some_type larger(some_type first, some_type second);

int main()
{
    cout << "Larger of 10 and 23 is: " << larger(10, 23) << endl;

    cout << "Larger of 111 and 76 is: " << larger(111, 76) << endl;

    cout << "Larger of 111.34 and 76.87 is: " << larger(111.34, 76.87) << endl;

    cout << "Larger of 'A' and 'Z' is: " << larger('A', 'Z') << endl;

    string zoe = "Zoe";
    string alice = "Alice";

    cout << "Larger of 'Alice' and 'Zoe' is: " << larger(alice, zoe) << endl;

    return 0;
}

// Function template definition
template <class some_type>
some_type larger(some_type first, some_type second)
{
    return first > second ? first : second;
}

/* OUTPUT
    Larger of 10 and 23 is: 23
    Larger of 111 and 76 is: 111
    Larger of 111.34 and 76.87 is: 111.34
    Larger of 'A' and 'Z' is: Z
    Larger of 'Alice' and 'Zoe' is: Zoe
*/