#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;

int main()
{
    const BankAccount nora_account("Nora", 7634.45f);
    BankAccount harry_account("Harry", 7345.33f);

    cout << "----------------- const object -----------------" << endl;
    cout << nora_account.get_name() << endl;
    cout << nora_account.get_balance() << endl;

    cout << "----------------- non-const object -----------------" << endl;
    cout << harry_account.get_name() << endl;
    cout << harry_account.get_balance() << endl;

    return 0;
}

/* OUTPUT
    ----------------- const object -----------------
    const version of get_name()
    Nora
    const version of get_balance()
    7634.45
    ----------------- non-const object -----------------
    non-const version of get_name()
    Harry
    non-const version of get_balance()
    7345.33
*/