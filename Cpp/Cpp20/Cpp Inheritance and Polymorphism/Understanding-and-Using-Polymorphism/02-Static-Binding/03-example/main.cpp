#include <iostream>

#include "AudioDevice.h"
#include "Speakers.h"

using std::cout;
using std::endl;

int main()
{
     AudioDevice ad{"Samsung", 99.99};
     Speakers sp{"Bose", 400, "15in x 10in x 10in"};

     cout << "----- AudioDevice display_price() -----" << endl;
     ad.display_price();
     cout << "----- AudioDevice get_price() -----" << endl;
     cout << ad.get_price() << endl;

     cout << "----- Speakers display_price() -----" << endl;
     sp.display_price();
     cout << "----- Speakers get_price() -----" << endl;
     cout << sp.get_price() << endl;

     return 0;
}

/*OUTPUT
     ----- AudioDevice display_price() -----
     Brand: Samsung price: get_price() in AudioDevice called
     99.99
     ----- AudioDevice get_price() -----
     get_price() in AudioDevice called
     99.99
     ----- Speakers display_price() -----
     Brand: Bose price: get_price() in AudioDevice called
     400
     ----- Speakers get_price() -----
     get_price() in Speakers called
     get_price() in AudioDevice called
     340
*/