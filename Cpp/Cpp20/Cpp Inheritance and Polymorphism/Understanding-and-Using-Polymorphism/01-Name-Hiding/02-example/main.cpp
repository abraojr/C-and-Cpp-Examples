#include <iostream>

#include "AudioDevice.h"
#include "Speakers.h"

using std::cout;
using std::endl;

int main()
{
     AudioDevice ad{"Samsung", 99.99};
     Speakers sp{"Bose", 400, "15in x 10in x 10in"};

     cout << "---------------------- Audio Device ----------------------" << endl;
     cout << "Brand: " << ad.get_brand()
          << " price: " << ad.get_price() << endl;

     cout << "---------------------- Speakers ----------------------" << endl;
     cout << "Brand: " << sp.get_brand()
          << " base price: " << sp.AudioDevice::get_price()
          << " discounted price: " << sp.get_price() << endl;

     return 0;
}

/*OUTPUT
     ---------------------- Audio Device ----------------------
     Brand: Samsung price: 99.99
     ---------------------- Speakers ----------------------
     Brand: Bose base price: 400 discounted price: 340
*/