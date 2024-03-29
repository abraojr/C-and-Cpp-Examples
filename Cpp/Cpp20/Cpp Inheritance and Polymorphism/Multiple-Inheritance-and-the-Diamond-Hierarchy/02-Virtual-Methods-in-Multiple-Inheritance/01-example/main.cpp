#include <iostream>

#include "Car.h"

using std::cout;
using std::endl;

int main()
{
    Car honda_civic{"Honda", "Civic", 35000, "music system, heated seats", 3000};
    Car toyota_camry{"Toyota", "Camry", 32000, "music system, voice commands", 10000};

    cout << "------- Honda Civic -------" << endl;
    cout << "Vehicle price: " << honda_civic.get_price() << endl;
    cout << "Accessories price: " << honda_civic.Accessories::get_price() << endl;
    cout << "Vehicle taxes: " << honda_civic.taxes() << endl;

    cout << "------- Toyota Camry -------" << endl;
    cout << "Vehicle price: " << toyota_camry.get_price() << endl;
    cout << "Accessories price: " << toyota_camry.Accessories::get_price() << endl;
    cout << "Vehicle taxes: " << toyota_camry.taxes() << endl;

    return 0;
}

/* OUTPUT
    ------- Honda Civic -------
    Vehicle price: 35000
    Accessories price: 3000
    Vehicle taxes: 1750
    ------- Toyota Camry -------
    Vehicle price: 32000
    Accessories price: 10000
    Vehicle taxes: 1600
*/