#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
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

    auto it = std::find(cities.begin(), cities.end(), "Seattle");

    if (it != cities.end())
    {
        *it = "SEATTLE";
    }

    for (auto it = cities.cbegin(); it != cities.cend(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}

/* OUTPUT
    New York
    SEATTLE
    San Francisco
    Boston
    Austin
*/