#include <iostream>
#include <memory>

using std::cout;
using std::endl;
using std::make_unique;
using std::unique_ptr;

int main()
{
    auto revenue_ptr{make_unique<double>(48572.76)};

    cout << "revenue_ptr ----------" << endl;
    cout << "Address " << revenue_ptr << endl;
    cout << "Value " << *revenue_ptr << endl;

    revenue_ptr.reset(new double{10000.67});

    cout << "After reset revenue_ptr ------------" << endl;
    cout << "Address " << revenue_ptr << endl;
    cout << "Value " << *revenue_ptr << endl;

    return 0;
}

/* OUTPUT
    revenue_ptr ----------
    Address 0x505388
    Value 48572.8
    After reset revenue_ptr ------------
    Address 0x505398
    Value 10000.7
*/