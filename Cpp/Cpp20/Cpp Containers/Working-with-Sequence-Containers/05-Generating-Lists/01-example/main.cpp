#include <iostream>
#include <list>

using std::cout;
using std::endl;
using std::list;
using std::string;

int main()
{
    list<string> countries = {"Brazil", "India", "USA", "Canada", "Sri Lanka"};

    cout << "-------------------Size-------------------" << endl;

    cout << "Size of list: " << countries.size() << endl;
    cout << "Maximum size of  list: " << countries.max_size() << endl;
    cout << "Is list empty: " << std::boolalpha << countries.empty() << endl;

    cout << "-------------------Contents-------------------" << endl;

    for (std::list<string>::const_reverse_iterator it = countries.crbegin();
         it != countries.crend();
         it++)
    {
        cout << *it << endl;
    }

    return 0;
}

/*  OUTPUT
    -------------------Size-------------------
    Size of list: 5
    Maximum size of  list: 192153584101141162
    Is list empty: false
    -------------------Contents-------------------
    Sri Lanka
    Canada
    USA
    India
    Brazil
*/