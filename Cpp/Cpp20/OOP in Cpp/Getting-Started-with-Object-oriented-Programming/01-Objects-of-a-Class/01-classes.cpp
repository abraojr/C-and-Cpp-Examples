#include <iostream>

using std::cout;
using std::endl;
using std::string;

class BankAccount
{
public:
    string name{};
    float balance{0};
};

int main()
{
    BankAccount claudia_account;
    BankAccount peter_account;

    cout << "----------Claudia's account----------" << endl;
    cout << claudia_account.name << endl;
    cout << claudia_account.balance << endl;

    cout << "----------Peter's account----------" << endl;
    cout << peter_account.name << endl;
    cout << peter_account.balance << endl;

    return 0;
}

/* OUTPUT
    ----------Claudia's account----------

    0
    ----------Peter's account----------

    0
*/