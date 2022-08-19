#include <iostream>
#include <string>

using std::cout;
using std::string;

// f(value, reference, reference to an array)
void f(int a, int &b, int (&c)[100])
{
    a = 1000;
    b = 5000;
    c[0] = 5555;
}

void g(const double &d)
{
    // d = 1.0; // error: cannot change value of const ref
}

// by value
void f(string m)
{
    cout << "&m from 'f': " << &m << "\n";
    m = "Hi, Earth!\n";
}

// by reference
void fr(string &m)
{
    cout << "&m from 'fr': " << &m << "\n";
    m = "Hi, Earth!\n";
}

int main()
{
    int a = 1, b = 2, c[100];
    c[0] = 10;
    f(a, b, c);
    cout << "a, b, c[0]: " << a << ", " << b << ", " << c[0] << "\n";

    string ms = "Hello, World!";
    cout << "&ms: " << &ms << "\n";

    f(ms); // by value
    cout << "ms: " << ms << "\n";

    fr(ms); // by reference
    cout << "ms: " << ms << "\n";

    return 0;
}

/* OUTPUT
    a, b, c[0]: 1, 5000, 5555
    &ms: 0x7ffcf2a08240
    &m from 'f': 0x7ffcf2a08260
    ms: Hello, World!
    &m from 'fr': 0x7ffcf2a08240
    ms: Hi, Earth!
*/