#include "HeatedSeats.h"

HeatedSeats::HeatedSeats(float price, int max_temperature) : Accessory(price), max_temperature(max_temperature) {}

int HeatedSeats::get_max_temperature() const
{
    return max_temperature;
}
