#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> cities{"New York", "Seattle", "Boston", "Austin"};

    for (const auto &city : cities)
    {
        // city[0] = std::tolower(city[0]);
        // city[1] = std::toupper(city[1]);

        cout << city << endl;
    }

    return 0;
}

/* OUTPUT
    New York
    Seattle
    Boston
    Austin
*/