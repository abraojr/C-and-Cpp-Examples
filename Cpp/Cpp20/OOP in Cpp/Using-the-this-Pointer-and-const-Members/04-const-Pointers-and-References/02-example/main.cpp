#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;

int main()
{
    BankAccount nora_account("Nora", 7634.45f);

    const BankAccount &nora_ref = nora_account;

    cout << nora_ref.get_name() << endl;
    cout << nora_ref.get_balance() << endl;

    return 0;
}

/* OUTPUT
    Nora
    7634.45
*/