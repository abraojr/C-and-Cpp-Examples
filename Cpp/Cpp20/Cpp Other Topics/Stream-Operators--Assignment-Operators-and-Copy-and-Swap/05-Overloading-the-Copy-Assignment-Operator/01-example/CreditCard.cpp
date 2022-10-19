#include <string>
#include <iostream>

#include "CreditCard.h"

using std::cout;
using std::endl;
using std::string;

CreditCard::CreditCard(string name, float limit) : name(name), limit(limit)
{
    cout << "Contructing card: " << name << ", limit: " << limit << endl;
}

CreditCard::~CreditCard()
{
    cout << "Destructing card: " << name << ", limit: " << limit << endl;
}