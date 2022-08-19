#include <iostream>

using std::cout;

int f(int a = 1, int b = 1, int c = 1)
{
    cout << a << " * " << b << " * " << c << "\n";
    return a * b * c;
}

int main()
{
    f(1, 2, 3);
    f();
    f(5);
    f(6, 7);

    return 0;
}

/* OUTPUT
    1 * 2 * 3
    1 * 1 * 1
    5 * 1 * 1
    6 * 7 * 1
*/