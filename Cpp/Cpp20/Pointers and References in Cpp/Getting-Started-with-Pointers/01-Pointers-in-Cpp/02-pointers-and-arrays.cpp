#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int balance{1000};
    int *balance_ptr{&balance};

    cout << "Original balance: " << balance << endl;
    cout << "Address of balance: " << balance_ptr << endl;
    cout << "Original balance (through pointer): " << *balance_ptr << endl;

    *balance_ptr = 2000;

    cout << "Updated balance: " << balance << endl;
    cout << "Updated balance (through pointer): " << *balance_ptr << endl;

    return 0;
}

/* OUTPUT
    Original balance: 1000
    Address of balance: 0x505308
    Original balance (through pointer): 1000
    Updated balance: 2000
    Updated balance (through pointer): 2000
*/