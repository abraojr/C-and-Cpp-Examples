// #define NDEBUG
#include <assert.h>
#include <iostream>

using std::cout;

void f(int *j)
{
    assert(j != nullptr);
    cout << *j << "\n";
}

int main()
{
    double i = 1.0;

    assert(i != 0);
    // if(i != 0) { ... } ???

    cout << 5.0 / i << "\n";

    int *k = nullptr;
    k = new int;
    *k = 10;

    f(k);
    delete k;

    return 0;
}

/* OUTPUT
    5
    10

*/