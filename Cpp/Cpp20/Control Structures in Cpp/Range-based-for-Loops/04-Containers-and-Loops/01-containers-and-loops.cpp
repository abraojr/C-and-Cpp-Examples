#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::size;
using std::string;
using std::vector;

int main()
{
    vector<string> cities;

    cities.push_back("New York");
    cities.push_back("Seattle");
    cities.push_back("San Francisco");
    cities.push_back("Boston");
    cities.push_back("Austin");

    for (int i = 0; i < cities.size(); i++)
    {
        cout << "City at i = " << i << " is " << cities[i] << endl;
    }

    cout << "City at i = " << 10 << " is " << cities[10] << endl;

    return 0;
}

/* OUTPUT
    City at i = 0 is New York
    City at i = 1 is Seattle
    City at i = 2 is San Francisco
    City at i = 3 is Boston
    City at i = 4 is Austin
    City at i = 10 is
*/