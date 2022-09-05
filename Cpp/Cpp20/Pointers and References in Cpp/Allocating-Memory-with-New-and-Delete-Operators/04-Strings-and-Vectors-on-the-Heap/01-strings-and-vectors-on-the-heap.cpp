#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string *empty_string_ptr{new string{}};
    string *country_ptr{new string{"Canada"}};

    cout << "Empty string: " << *empty_string_ptr << endl;
    cout << "Country: " << *country_ptr << endl;

    delete empty_string_ptr;
    delete country_ptr;

    empty_string_ptr = nullptr;
    country_ptr = nullptr;

    return 0;
}

/* OUTPUT
    Empty string:
    Country: Canada
*/