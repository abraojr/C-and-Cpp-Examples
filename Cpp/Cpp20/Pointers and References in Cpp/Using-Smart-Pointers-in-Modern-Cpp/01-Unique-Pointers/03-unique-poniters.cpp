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
    cout << "Original " << revenue_ptr << endl;

    auto revenue_ptr_move = std::move(revenue_ptr);

    cout << "After move " << revenue_ptr << endl;

    cout << "revenue_ptr_move ----------" << endl;
    cout << "Moved address " << revenue_ptr_move << endl;
    cout << "Moved value " << *revenue_ptr_move << endl;

    return 0;
}

/* OUTPUT
    revenue_ptr ----------
    Original 0x5053a8
    After move 0x0
    revenue_ptr_move ----------
    Moved address 0x5053a8
    Moved value 48572.8
*/