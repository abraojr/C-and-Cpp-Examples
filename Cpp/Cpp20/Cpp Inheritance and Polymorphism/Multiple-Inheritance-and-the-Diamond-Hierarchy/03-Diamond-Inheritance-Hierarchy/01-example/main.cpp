#include <iostream>

#include "HeatedLeatherSeats.h"

using std::cout;
using std::endl;

int main()
{
    HeatedLeatherSeats hl_seats{2000, 1000, 30, "red"};

    cout << "------- HeatedLeatherSeats -------" << endl;

    cout << "Heated seats price: " << hl_seats.HeatedSeats::get_price() << endl;
    cout << "Heated seats max temperature: " << hl_seats.get_max_temperature() << endl;

    cout << "Leather seats price: " << hl_seats.LeatherSeats::get_price() << endl;
    cout << "Leather seats color: " << hl_seats.get_color() << endl;

    return 0;
}

/* OUTPUT
    ------- HeatedLeatherSeats -------
    Heated seats price: 2000
    Heated seats max temperature: 30
    Leather seats price: 1000
    Leather seats color: red
*/