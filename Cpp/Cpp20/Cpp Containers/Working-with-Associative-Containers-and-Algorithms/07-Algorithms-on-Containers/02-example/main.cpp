#include <algorithm>
#include <iostream>
#include <set>

using std::cout;
using std::endl;
using std::max_element;
using std::min_element;
using std::set;
using std::string;

int main()
{
    set<string> names_set{
        "Kelly Smith",
        "Gina Johnson",
        "Mason Capwell",
        "Eden de la Renta",
        "Peter P"};

    set<string>::iterator it_min = min_element(names_set.begin(), names_set.end());
    set<string>::iterator it_max = max_element(names_set.begin(), names_set.end());

    cout << "Minimum: " << *it_min << endl;
    cout << "Maximum: " << *it_max << endl;

    return 0;
}

/* OUTPUT
    Minimum: Eden de la Renta
    Maximum: Peter P
*/