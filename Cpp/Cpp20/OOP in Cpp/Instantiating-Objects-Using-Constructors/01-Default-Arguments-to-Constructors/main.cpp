#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;

int main()
{
    BankAccount claudia_account("Claudia", 10000.45f);
    BankAccount peter_account("Peter");
    BankAccount sarah_account;

    cout << "----------Claudia's account----------" << endl;
    cout << claudia_account.get_name() << endl;
    cout << claudia_account.get_balance() << endl;

    cout << "----------Peter's account----------" << endl;
    cout << peter_account.get_name() << endl;
    cout << peter_account.get_balance() << endl;

    cout << "----------Sarah's account----------" << endl;
    cout << sarah_account.get_name() << endl;
    cout << sarah_account.get_balance() << endl;

    return 0;
}

/* OUTPUT
    BankAccount constructor for: Claudia balance: 10000.5
    BankAccount constructor for: Peter balance: 100
    BankAccount constructor for: Unknown balance: 100
    ----------Claudia's account----------
    Claudia
    10000.5
    ----------Peter's account----------
    Peter
    100
    ----------Sarah's account----------
    Unknown
    100
*/