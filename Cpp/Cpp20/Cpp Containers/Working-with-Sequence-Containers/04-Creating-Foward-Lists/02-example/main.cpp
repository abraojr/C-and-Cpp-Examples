#include <forward_list>
#include <iostream>

using std::cout;
using std::endl;
using std::forward_list;
using std::string;

int main()
{
    forward_list<string> countries = {"India", "USA", "Canada"};

    cout << "-------------------Front of the foward list-------------------" << endl;
    cout << countries.front() << endl;

    cout << "-------------------Original Contents-------------------" << endl;

    for (string &country : countries)
    {
        cout << country << endl;
    }

    countries.push_front("Brazil");

    cout << "-------------------Contents (after push front)-------------------" << endl;

    for (string &country : countries)
    {
        cout << country << endl;
    }

    countries.pop_front();

    cout << "-------------------Contents (after pop front)-------------------" << endl;

    for (string &country : countries)
    {
        cout << country << endl;
    }

    return 0;
}

/*  OUTPUT
    -------------------Front of the foward list-------------------
    India
    -------------------Original Contents-------------------
    India
    USA
    Canada
    -------------------Contents (after push front)-------------------
    Brazil
    India
    USA
    Canada
    -------------------Contents (after pop front)-------------------
    India
    USA
    Canada
*/