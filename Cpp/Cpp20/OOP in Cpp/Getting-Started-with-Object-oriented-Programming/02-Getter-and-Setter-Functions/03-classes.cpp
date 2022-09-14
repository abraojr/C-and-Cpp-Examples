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

    void set_name(string n)
    {
        name = n;
    }

    float get_balance()
    {
        return balance;
    }

    void set_balance(float b)
    {
        balance = b;
    }
};

int main()
{
    BankAccount claudia_account;
    BankAccount peter_account;

    cout << "----------Claudia's account----------" << endl;
    claudia_account.set_name("Claudia");
    claudia_account.set_balance(10000.34f);

    cout << claudia_account.get_name() << endl;
    cout << claudia_account.get_balance() << endl;

    cout << "----------Peter's account----------" << endl;
    peter_account.set_name("Peter");
    peter_account.set_balance(5555.55f);

    cout << peter_account.get_name() << endl;
    cout << peter_account.get_balance() << endl;

    return 0;
}

/* OUTPUT
    ----------Claudia's account----------
    Claudia
    10000.3
    ----------Peter's account----------
    Peter
    5555.55
*/