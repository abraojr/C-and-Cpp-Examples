#pragma once
#include <string>

#include "AudioDevice.h"

class Headphones : public AudioDevice
{
private:
    float cord_length;

public:
    Headphones(std::string brand, float price, float cord_length);

    float get_cord_length() const;
};