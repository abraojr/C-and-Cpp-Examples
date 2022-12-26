#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> names_vector = {"Liz", "Lucy", "Sam", "Fred", "Ophelia"};

    cout << "---------Original Contents---------" << endl;

    for (string &name : names_vector)
    {
        cout << name << endl;
    }

    names_vector.insert(names_vector.begin() + 2, "Sophia");

    cout << "---------Contents (after insert)---------" << endl;

    for (string &name : names_vector)
    {
        cout << name << endl;
    }

    names_vector.erase(names_vector.end() - 2);

    cout << "---------Contents (after erase)---------" << endl;

    for (string &name : names_vector)
    {
        cout << name << endl;
    }

    return 0;
}

/* OUTPUT
    ---------Original Contents---------
    Liz
    Lucy
    Sam
    Fred
    Ophelia
    ---------Contents (after insert)---------
    Liz
    Lucy
    Sophia
    Sam
    Fred
    Ophelia
    ---------Contents (after erase)---------
    Liz
    Lucy
    Sophia
    Sam
    Ophelia
*/