#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    string name_1{"Alice Smith"};
    string name_2{"Bob McCarthy"};
    string name_3{"Charles Babbage"};
    string name_4{"Dora Jones"};

    vector<string> names{name_1, name_2, name_3, name_4};

    vector<string> *names_ptr = &names;

    cout << "Name at index = 2: " << names_ptr->at(2) << endl;
    cout << "Length of name at index = 2: " << (names_ptr->at(2).length()) << endl;

    for (auto it = names_ptr->cbegin(); it != names_ptr->cend(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}

/* OUTPUT
    Name at index = 2: Charles Babbage
    Length of name at index = 2: 15
    Alice Smith
    Bob McCarthy
    Charles Babbage
    Dora Jones
*/