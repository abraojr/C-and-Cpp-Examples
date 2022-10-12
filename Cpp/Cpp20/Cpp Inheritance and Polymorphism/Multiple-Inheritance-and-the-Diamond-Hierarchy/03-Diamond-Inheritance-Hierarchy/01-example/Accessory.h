#pragma once

class Accessory
{
private:
    float price;

public:
    Accessory(float price);

    float virtual get_price() const;
};
