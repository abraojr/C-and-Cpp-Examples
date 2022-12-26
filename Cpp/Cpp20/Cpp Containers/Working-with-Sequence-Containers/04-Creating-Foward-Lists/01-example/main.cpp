#include <forward_list>
#include <iostream>

using std::cout;
using std::endl;
using std::forward_list;
using std::string;

int main()
{
    forward_list<string> countries = {"Brazil", "India", "USA", "Canada", "Sri Lanka"};

    cout << "-------------------Size-------------------" << endl;

    // cout << "Size of foward list: " << countries.size() << endl;
    cout << "Maximum size of foward list: " << countries.max_size() << endl;
    cout << "Is foward list empty: " << std::boolalpha << countries.empty() << endl;

    cout << "-------------------Contents-------------------" << endl;

    for (string &country : countries)
    {
        cout << country << endl;
    }

    return 0;
}

/*  OUTPUT
    -------------------Size-------------------
    Maximum size of foward list: 230584300921369395
    Is foward list empty: false
    -------------------Contents-------------------
    Brazil
    India
    USA
    Canada
    Sri Lanka
*/