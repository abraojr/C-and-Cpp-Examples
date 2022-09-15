#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;

int main()
{
    BankAccount claudia_account("Claudia", 10000.45f, "savings", 1.1f);
    BankAccount peter_account("Peter", 5555.55f, "savings");
    BankAccount sarah_account("Sarah", 234.34f);
    BankAccount greg_account("Greg");

    return 0;
}

/* OUTPUT
    --------------------------------------
    BankAccount 4 argument constructor: Claudia balance: 10000.5 account type: savings service charge: 1.1
    --------------------------------------
    BankAccount 4 argument constructor: Peter balance: 5555.55 account type: savings service charge: 0
    BankAccount 3 argument constructor
    --------------------------------------
    BankAccount 4 argument constructor: Sarah balance: 234.34 account type: checking service charge: 0
    BankAccount 3 argument constructor
    BankAccount 2 argument constructor
    --------------------------------------
    BankAccount 4 argument constructor: Greg balance: 100 account type: checking service charge: 0
    BankAccount 3 argument constructor
    BankAccount 2 argument constructor
    BankAccount 1 argument constructor
*/