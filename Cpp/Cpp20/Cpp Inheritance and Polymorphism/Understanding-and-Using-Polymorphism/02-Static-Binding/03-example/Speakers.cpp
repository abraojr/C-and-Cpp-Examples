#include <string>
#include <iostream>

#include "Speakers.h"

using std::cout;
using std::endl;
using std::string;

Speakers::Speakers(string brand, float price, string dimensions) : AudioDevice(brand, price), dimensions(dimensions) {}

string Speakers::get_dimensions() const
{
    return dimensions;
}

float Speakers::get_price() const
{
    cout << "get_price() in Speakers called" << endl;
    float base_price = AudioDevice::get_price();

    return base_price - base_price * 0.15;
}