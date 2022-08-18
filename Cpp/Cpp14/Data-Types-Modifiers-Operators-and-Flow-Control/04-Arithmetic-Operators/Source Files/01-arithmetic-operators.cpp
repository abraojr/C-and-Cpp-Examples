#include <iostream>

using std::cout;

/* Precedence: C++ uses left-to-rigth operation
    1.
    multiply: *
    divide: /
    modulus: %

    2.
    addition: +
    subtraction: -
*/

int main()
{
    int a;
    int b = 10;
    double x;
    double y = 3.6742;

    cout << "2 + 2 = " << 2 + 2 << "\n";

    // precedence
    a = 120 - 5 % 2 * 10 + 100 / 10;
    cout << "120 - 5 % 2 * 10 + 100 / 10 = " << a << "\n";

    // force precedence with parentheses
    a = (120 - 5) % 2 * (10 + 100) / 10;
    cout << "(120 - 5) % 2 * (10 + 100) / 10 = " << a << "\n";

    // implicit conversion: double and int
    a = y + b;
    x = y * b;
    cout << "a: " << a << "\n";
    cout << "x: " << x << "\n";

    return 0;
}

/* OUTPUT
    2 + 2 = 4
    120 - 5 % 2 * 10 + 100 / 10 = 120
    (120 - 5) % 2 * (10 + 100) / 10 = 11
    a: 13
    x: 36.742
*/