#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;

int main()
{
    BankAccount const *nora_account = new BankAccount("Nora", 7634.45f);

    cout << nora_account->get_name() << endl;
    cout << nora_account->get_balance() << endl;

    delete nora_account;
    nora_account = nullptr;

    return 0;
}

/* OUTPUT
    Nora
    7634.45
*/