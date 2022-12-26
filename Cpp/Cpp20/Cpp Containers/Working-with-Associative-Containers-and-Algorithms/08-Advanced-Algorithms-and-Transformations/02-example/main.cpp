#include <algorithm>
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::for_each;
using std::string;
using std::vector;

void convert_to_uppercase(string &city)
{
    for (char &ch : city)
    {
        ch = ::toupper(ch);
    }
};

struct StringPrinter
{
    void operator()(const string &city) const
    {
        cout << city << endl;
    }
} string_printer;

int main()
{
    vector<string> cities{"Bangalore", "Seattle", "Greenwich", "New York City", "Palo Alto", "Hyderabad"};

    cout << "----------Before conversion----------" << endl;
    for_each(cities.begin(), cities.end(), string_printer);

    for_each(cities.begin(), cities.end(), convert_to_uppercase);

    cout << "----------After conversion----------" << endl;
    for_each(cities.begin(), cities.end(), string_printer);

    return 0;
};

/* OUTPUT
    ----------Before conversion----------
    Bangalore
    Seattle
    Greenwich
    New York City
    Palo Alto
    Hyderabad
    ----------After conversion----------
    BANGALORE
    SEATTLE
    GREENWICH
    NEW YORK CITY
    PALO ALTO
    HYDERABAD
*/