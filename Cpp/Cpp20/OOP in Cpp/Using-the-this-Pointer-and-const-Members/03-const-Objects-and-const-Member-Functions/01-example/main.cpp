#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;

int main()
{
    const BankAccount nora_account("Nora", 7634.45f);

    cout << nora_account.get_name() << endl;
    cout << nora_account.get_balance() << endl;

    return 0;
}

/* OUTPUT
    Nora
    7634.45
*/