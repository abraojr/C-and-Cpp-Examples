#include <iostream>

using std::cout;

constexpr int f()
{
    return 5;
}

inline int g()
{
    return 6;
}

int main()
{
    cout << f() << "\n";
    cout << g() << "\n";

    return 0;
}

/* OUTPUT
    5
    6
*/