#include <iostream>

using std::cout;

namespace ABC
{
    int a, b, c;
}

int main()
{
    int a = 1;
    using ABC::b;

    b = 10;
    ABC::c = 100;
    using namespace ABC;

    cout << "a, b, c: " << a << ", " << b << ", " << c << "\n";

    return 0;
}

/* OUTPUT
    a, b, c: 1, 10, 100
*/