#include <iostream>

#include "AudioDevice.h"
#include "Headphones.h"
#include "Speakers.h"

using std::cout;
using std::endl;

int main()
{
     AudioDevice ad{"Samsung", 99.99};
     Headphones hp{"Apple", 129.99, 2.5};
     Speakers sp{"Bose", 399.99, "15in x 10in x 10in"};

     cout << "---------------------- Audio Device ----------------------" << endl;
     cout << "Brand: " << ad.get_brand()
          << " price: " << ad.get_price() << endl;

     cout << "---------------------- Headphones ----------------------" << endl;
     cout << "Brand: " << hp.get_brand()
          << " price: " << hp.get_price()
          << " cord length: " << hp.get_cord_length() << endl;

     cout << "---------------------- Speakers ----------------------" << endl;
     cout << "Brand: " << sp.get_brand()
          << " price: " << sp.get_price()
          << " dimensions: " << sp.get_dimensions() << endl;

     return 0;
}

/*OUTPUT
     ---------------------- Audio Device ----------------------
     Brand: Samsung price: 99.99
     ---------------------- Headphones ----------------------
     Brand: Apple price: 129.99 cord length: 2.5
     ---------------------- Speakers ----------------------
     Brand: Bose price: 399.99 dimensions: 15in x 10in x 10in
*/