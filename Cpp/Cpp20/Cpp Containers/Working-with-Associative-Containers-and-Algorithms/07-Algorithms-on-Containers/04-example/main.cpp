#include <algorithm>
#include <iostream>
#include <set>

using std::cout;
using std::endl;
using std::max_element;
using std::min_element;
using std::set;
using std::string;

struct StringLengthSmaller
{

    bool operator()(const string &a, const string &b) const
    {
        return a.length() < b.length() ? true : false;
    }
} string_length_smaller;

int main()
{
    set<string> names_set{
        "Kelly Smith",
        "Gina Johnson",
        "Mason Capwell",
        "Eden de la Renta",
        "Peter P"};

    set<string>::iterator it_min = min_element(names_set.begin(), names_set.end(), string_length_smaller);
    set<string>::iterator it_max = max_element(names_set.begin(), names_set.end(), string_length_smaller);

    cout << "Minimum: " << *it_min << endl;
    cout << "Maximum: " << *it_max << endl;

    return 0;
}

/* OUTPUT
    Minimum: Peter P
    Maximum: Eden de la Renta
*/