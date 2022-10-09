#include <string>
#include <iostream>

#include "AudioDevice.h"

using std::cout;
using std::endl;
using std::string;

AudioDevice::AudioDevice(string brand, float price) : brand(brand), price(price) {}

string AudioDevice::get_brand() const
{
    return brand;
}

float AudioDevice::get_price() const
{
    cout << "get_price() in AudioDevice called" << endl;
    return price;
}