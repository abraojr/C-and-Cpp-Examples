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

     AudioDevice &ad_ref = ad;
     Headphones &hp_ref = hp;
     Speakers &sp_ref = sp;

     cout << "---------------------- Audio Device ----------------------" << endl;
     cout << "Brand: " << ad_ref.get_brand()
          << " price: " << ad_ref.get_price() << endl;

     cout << "---------------------- Headphones ----------------------" << endl;
     cout << "Brand: " << hp_ref.get_brand()
          << " price: " << hp_ref.get_price()
          << " cord length: " << hp_ref.get_cord_length() << endl;

     cout << "---------------------- Speakers ----------------------" << endl;
     cout << "Brand: " << sp_ref.get_brand()
          << " price: " << sp_ref.get_price()
          << " dimensions: " << sp_ref.get_dimensions() << endl;

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