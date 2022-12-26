#include <algorithm>
#include <iostream>
#include <vector>

using std::all_of;
using std::any_of;
using std::cout;
using std::endl;
using std::none_of;
using std::string;
using std::vector;

bool starts_with_G(const string &city)
{
    return city[0] == 'G';
}

int main()
{
    vector<string> cities{"Bangalore", "Seattle", "Greenwich", "New York City", "Palo Alto", "Hyderabad"};

    cout << "all_of starts with G: " << std::boolalpha << all_of(cities.begin(), cities.end(), starts_with_G) << endl;
    cout << "any_of starts with G: " << std::boolalpha << any_of(cities.begin(), cities.end(), starts_with_G) << endl;
    cout << "none_of starts with G: " << std::boolalpha << none_of(cities.begin(), cities.end(), starts_with_G) << endl;

    return 0;
}

/* OUTPUT
    all_of starts with G: false
    any_of starts with G: true
    none_of starts with G: false
*/