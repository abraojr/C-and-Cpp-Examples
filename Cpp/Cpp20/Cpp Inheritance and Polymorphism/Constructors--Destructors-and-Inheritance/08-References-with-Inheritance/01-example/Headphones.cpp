#include <string>
#include <iostream>

#include "Headphones.h"

using std::cout;
using std::endl;
using std::string;

Headphones::Headphones(string brand, float price, float cord_length) : AudioDevice(brand, price), cord_length(cord_length) {}

float Headphones::get_cord_length() const
{
    return cord_length;
}