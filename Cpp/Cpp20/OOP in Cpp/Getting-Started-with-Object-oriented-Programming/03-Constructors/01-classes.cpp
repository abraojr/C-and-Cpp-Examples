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
    // Default constructor
    BankAccount()
    {
        cout << "No-argument constructor called" << endl;
    }

    BankAccount(string n, float b)
    {
        name = n;
        balance = b;

        cout << "BankAccount constructor for: " << name << " balance: " << balance << endl;
    }

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
    BankAccount claudia_account("Claudia", 10000.34f);
    BankAccount peter_account("Peter", 5555.55f);
    BankAccount sarah_account;

    return 0;
}

/* OUTPUT
    BankAccount constructor for: Claudia balance: 10000.3
    BankAccount constructor for: Peter balance: 5555.55
    No-argument constructor called
*/