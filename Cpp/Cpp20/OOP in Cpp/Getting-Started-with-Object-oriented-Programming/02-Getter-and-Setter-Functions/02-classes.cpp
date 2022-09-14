#include <iostream>

using std::cout;
using std::endl;
using std::string;

class BankAccount
{
private:
    string name{};
    float balance{0};

public:
    string get_name()
    {
        return name;
    }

    float get_balance()
    {
        return balance;
    }
};

int main()
{
    BankAccount claudia_account;
    BankAccount peter_account;

    cout << "----------Claudia's account----------" << endl;
    cout << claudia_account.get_name() << endl;
    cout << claudia_account.get_balance() << endl;

    cout << "----------Peter's account----------" << endl;
    cout << peter_account.get_name() << endl;
    cout << peter_account.get_balance() << endl;

    return 0;
}

/* OUTPUT
    ----------Claudia's account----------

    0
    ----------Peter's account----------

    0
*/