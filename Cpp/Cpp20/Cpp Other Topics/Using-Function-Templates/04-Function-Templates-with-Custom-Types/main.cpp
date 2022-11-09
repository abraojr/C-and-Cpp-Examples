#include <iostream>
#include <string>

#include "function_templates.h"
#include "BankAccount.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
    BankAccount brian_account{"Brian", 9834.44, 7000.65};
    BankAccount andie_account{"Andie", 6033.29, 500.56};
    BankAccount zoe_account{"Zoe", 2076.34, 200.00};

    cout << "Larger of brian_account and andie_account is: "
         << larger(brian_account, andie_account) << endl;

    cout << "Smaller of andie_account and zoe_account is: "
         << smaller(andie_account, zoe_account) << endl;

    return 0;
}

/* OUTPUT
    Larger of brian_account and andie_account is: Name: Andie, balance: 6033.29, cc due: 500.56

    Smaller of andie_account and zoe_account is: Name: Zoe, balance: 2076.34, cc due: 200
*/