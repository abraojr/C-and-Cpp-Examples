#include <iostream>
#include <string>

using std::cout;
using std::string;

class X
{
    string name;

public:
    static int count;

    X(string name) : name(name) {}

    friend void OutputName(X &x);
};

void OutputName(X &x)
{
    cout << x.name << "\n";
}

int main()
{
    X a("Alice");
    X b("Bob");

    OutputName(a);
    OutputName(b);

    return 0;
}

/* OUTPUT
    Alice
    Bob
*/