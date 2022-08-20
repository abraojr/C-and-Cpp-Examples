#include <iostream>

using std::cout;

namespace A_VERY_LONG_NAMESPACE_NAME
{
    void f()
    {
        cout << "a function\n";
    }
}

int main()
{
    namespace A = A_VERY_LONG_NAMESPACE_NAME;
    A::f();

    return 0;
}

/* OUTPUT
    a function
*/