#include <string>

#include "HeatedLeatherSeats.h"

using std::string;

HeatedLeatherSeats::HeatedLeatherSeats(
    float heated_seats_price, float leather_seats_price,
    int max_temperature, string color) : HeatedSeats(heated_seats_price, max_temperature),
                                         LeatherSeats(leather_seats_price, color) {}