#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;

int main()
{
    BankAccount claudia_account("Claudia", 10000.45f);
    BankAccount peter_account("Peter", 6667.35f);

    cout << "Address of claudia_account: " << &claudia_account << endl;
    claudia_account.display();

    cout << "----------------------------------------------" << endl;
    cout << "Address of peter_account: " << &peter_account << endl;
    peter_account.display();

    return 0;
}

/* OUTPUT
    Address of claudia_account: 0x7ffdeede0600
    Name: Claudia balance: 10000.5
    Address of account using the 'this' pointer: 0x7ffdeede0600
    ----------------------------------------------
    Address of peter_account: 0x7ffdeede0630
    Name: Peter balance: 6667.35
    Address of account using the 'this' pointer: 0x7ffdeede0630
*/