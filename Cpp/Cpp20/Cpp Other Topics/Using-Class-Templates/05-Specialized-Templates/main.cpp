#include <iostream>
#include <string>

#include "Container.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
    Container<int> int_container{100};
    Container<float> float_container{112.997f};
    Container<string> string_container{"It always seems impossible until it's done."};

    Container<int> another_int_container{200};
    Container<float> another_float_container{1112.997f};
    Container<string> another_string_container{"zzzzzzz"};

    if (int_container < another_int_container)
    {
        cout << "int_container is less than another_int_container" << endl;
    }

    if (another_float_container > float_container)
    {
        cout << "another_float_container is greater than float_container" << endl;
    }

    if (string_container < another_string_container)
    {
        cout << "string_container length is less than another_string_container" << endl;
    }

    if (string_container > another_string_container)
    {
        cout << "string_container length is greater than another_string_container" << endl;
    }

    return 0;
}

/* OUTPUT
    Specialized string template: It always seems impossible until it's done.
    Specialized string template: zzzzzzz
    int_container is less than another_int_container
    another_float_container is greater than float_container
    Specialized string template operator<()
    Specialized string template operator>()
    string_container length is greater than another_string_container
*/