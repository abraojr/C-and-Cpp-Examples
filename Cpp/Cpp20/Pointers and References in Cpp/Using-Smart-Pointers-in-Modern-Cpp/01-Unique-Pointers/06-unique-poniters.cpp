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

    double *revenue_raw_ptr = revenue_ptr.release();

    cout << "After release revenue_ptr ------------" << endl;
    cout << "Address " << revenue_ptr << endl;

    cout << "After release revenue_raw_ptr ------------" << endl;
    cout << "Value " << *revenue_raw_ptr << endl;

    delete revenue_raw_ptr;
    revenue_raw_ptr = nullptr;

    return 0;
}

/* OUTPUT
    revenue_ptr ----------
    Address 0x5053b8
    Value 48572.8
    After release revenue_ptr ------------
    Address 0x0
    After release revenue_raw_ptr ------------
    Value 48572.8
*/