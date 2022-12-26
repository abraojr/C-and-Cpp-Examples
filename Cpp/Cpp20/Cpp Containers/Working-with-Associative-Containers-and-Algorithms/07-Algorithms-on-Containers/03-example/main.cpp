#include <algorithm>
#include <iostream>
#include <set>

using std::cout;
using std::endl;
using std::max_element;
using std::min_element;
using std::set;
using std::string;

bool smaller_string_length(const string &a, const string &b)
{
    return a.length() < b.length() ? true : false;
}

int main()
{
    set<string> names_set{
        "Kelly Smith",
        "Gina Johnson",
        "Mason Capwell",
        "Eden de la Renta",
        "Peter P"};

    set<string>::iterator it_min = min_element(names_set.begin(), names_set.end(), smaller_string_length);
    set<string>::iterator it_max = max_element(names_set.begin(), names_set.end(), smaller_string_length);

    cout << "Minimum: " << *it_min << endl;
    cout << "Maximum: " << *it_max << endl;

    return 0;
}

/* OUTPUT
    Minimum: Peter P
    Maximum: Eden de la Renta
*/