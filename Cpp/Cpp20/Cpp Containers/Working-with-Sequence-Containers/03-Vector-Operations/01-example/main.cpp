#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> names_vector{1};

    cout << "---------Size (before adding elements)---------" << endl;

    cout << "Size of vector: " << names_vector.size() << endl;
    cout << "Allocated capacity: " << names_vector.capacity() << endl;

    names_vector.push_back("Liz");
    names_vector.push_back("Lucy");
    names_vector.push_back("Sam");
    names_vector.push_back("Fred");

    cout << "---------Contents (after push back)---------" << endl;

    for (string &name : names_vector)
    {
        cout << name << endl;
    }

    names_vector.pop_back();
    names_vector.pop_back();

    cout << "---------Contents (after pop back)---------" << endl;

    for (string &name : names_vector)
    {
        cout << name << endl;
    }

    names_vector[0] = "John";
    names_vector.at(1) = "Elizabeth";

    cout << "---------Contents (after update)---------" << endl;

    for (string &name : names_vector)
    {
        cout << name << endl;
    }

    return 0;
}

/* OUTPUT
    ---------Size (before adding elements)---------
    Size of vector: 1
    Allocated capacity: 1
    ---------Contents (after push back)---------

    Liz
    Lucy
    Sam
    Fred
    ---------Contents (after pop back)---------

    Liz
    Lucy
    ---------Contents (after update)---------
    John
    Elizabeth
    Lucy
*/