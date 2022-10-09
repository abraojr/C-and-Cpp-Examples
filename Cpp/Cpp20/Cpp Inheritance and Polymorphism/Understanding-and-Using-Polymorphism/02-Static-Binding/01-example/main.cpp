#include <iostream>

#include "AudioDevice.h"
#include "Speakers.h"

using std::cout;
using std::endl;

int main()
{
     Speakers sp{"Bose", 400, "15in x 10in x 10in"};
     Speakers *sp_ptr{&sp};
     AudioDevice *sp_through_base_ptr{&sp};

     cout << "----- Speakers (through derived class pointer ) -----" << endl;
     cout << "Brand: " << sp_ptr->get_brand()
          << " price: " << sp_ptr->get_price() << endl;

     cout << "----- Speakers (through base class pointer ) -----" << endl;
     cout << "Brand: " << sp_through_base_ptr->get_brand()
          << " price: " << sp_through_base_ptr->get_price() << endl;

     return 0;
}

/*OUTPUT
     ----- Speakers (through derived class pointer ) -----
     Brand: Bose price: get_price() in Speakers called
     get_price() in AudioDevice called
     340
     ----- Speakers (through base class pointer ) -----
     Brand: Bose price: get_price() in AudioDevice called
     400
*/