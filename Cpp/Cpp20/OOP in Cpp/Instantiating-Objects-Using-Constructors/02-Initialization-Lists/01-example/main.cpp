#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;

int main()
{
    BankAccount claudia_account("Claudia", 10000.45f, "savings");
    BankAccount peter_account("Peter", 5555.55f, "checking");

    cout << "----------Claudia's account----------" << endl;
    cout << claudia_account.get_name() << endl;
    cout << claudia_account.get_balance() << endl;
    cout << claudia_account.get_account_type() << endl;

    cout << "----------Peter's account----------" << endl;
    cout << peter_account.get_name() << endl;
    cout << peter_account.get_balance() << endl;
    cout << peter_account.get_account_type() << endl;

    return 0;
}

/* OUTPUT
    BankAccount constructor for: Claudia balance: 10000.5 account type: savings
    BankAccount constructor for: Peter balance: 5555.55 account type: checking
    ----------Claudia's account----------
    Claudia
    10000.5
    savings
    ----------Peter's account----------
    Peter
    5555.55
    checking
*/