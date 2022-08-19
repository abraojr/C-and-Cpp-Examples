#include <iostream>

using std::cout;

int f(int a, int b)
{
    return a * b;
}

int f(int a, int b, int c)
{
    return a * b * c;
}

double f(double a, double b)
{
    return a * b;
}

double f(double a, double b, double c)
{
    return a * b * c;
}

int main()
{
    cout << f(2, 2) << "\n";
    cout << f(2, 2, 2) << "\n";
    cout << f(1.5, 2.0) << "\n";
    cout << f(2.5, 2.0, 1.0) << "\n";

    return 0;
}

/* OUTPUT
    4
    8
    3
    5
*/