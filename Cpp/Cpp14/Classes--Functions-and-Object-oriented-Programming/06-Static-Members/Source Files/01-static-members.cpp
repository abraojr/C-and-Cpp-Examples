#include <iostream>
#include <string>

using std::cout;
using std::string;

class X
{
    string name;

public:
    static int count;

    X(string name) : name(name)
    {
        count++;
    }

    ~X()
    {
        count--;
    }
};

int X::count = 0;

int main()
{
    X x("Hello"), y("Hi"), z("Bonjour");
    cout << "1. count: " << X::count << "\n";

    X *t = new X("Allo");
    cout << "2. count (after new): " << X::count << "\n";

    delete t;
    cout << "3. count (after delete): " << X::count << "\n";

    return 0;
}

/* OUTPUT
    1. count: 3
    2. count (after new): 4
    3. count (after delete): 3
*/