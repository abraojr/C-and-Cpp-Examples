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