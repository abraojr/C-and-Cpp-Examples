#include <string>
#include <iostream>

#include "Accessories.h"

using std::cout;
using std::endl;
using std::string;

Accessories::Accessories(string accessories, float price) : accessories(accessories), price(price), taxes(price * 0.01) {}

string Accessories::get_accessories() const
{
    return accessories;
}

float Accessories::get_price() const
{
    return price;
}

float Accessories::get_taxes() const
{
    return taxes;
}