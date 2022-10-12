#include "Accessory.h"

Accessory::Accessory(float price) : price(price) {}

float Accessory::get_price() const
{
    return price;
}
