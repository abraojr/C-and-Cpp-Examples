#include <forward_list>
#include <iostream>

using std::cout;
using std::endl;
using std::forward_list;
using std::string;

int main()
{
    forward_list<string> countries = {"India", "USA", "Canada"};

    cout << "-------------------Original Contents-------------------" << endl;

    for (string &country : countries)
    {
        cout << country << endl;
    }

    countries.insert_after(countries.begin(), "Brazil");

    cout << "-------------------Contents (after insert)-------------------" << endl;

    for (string &country : countries)
    {
        cout << country << endl;
    }

    countries.erase_after(countries.before_begin());

    cout << "-------------------Contents (after erase)-------------------" << endl;

    for (string &country : countries)
    {
        cout << country << endl;
    }

    return 0;
}

/*  OUTPUT
    -------------------Original Contents-------------------
    India
    USA
    Canada
    -------------------Contents (after insert)-------------------
    India
    Brazil
    USA
    Canada
    -------------------Contents (after erase)-------------------
    Brazil
    USA
    Canada
*/