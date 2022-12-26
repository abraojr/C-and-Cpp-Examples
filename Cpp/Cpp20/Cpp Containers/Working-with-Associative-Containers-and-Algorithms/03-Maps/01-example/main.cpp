#include <iostream>
#include <map>

using std::cout;
using std::endl;
using std::map;
using std::pair;
using std::string;

int main()
{
    map<int, string> employees = {
        {1, "Noah"},
        {2, "Robert"},
        {3, "Mary"},
        {4, "Jennifer"}};

    cout << endl << "------------Entries------------" << endl;
    for (pair<int, string> entry : employees)
    {
        cout << entry.first << ": " << entry.second << endl;
    }

    cout << endl << "------------Lookup by key------------" << endl;
    cout << "Employee id: " << 1 << " name: " << employees.at(1) << endl;
    cout << "Employee id: " << 2 << " name: " << employees.at(2) << endl;
    cout << "Employee id: " << 3 << " name: " << employees.at(3) << endl;
    cout << "Employee id: " << 4 << " name: " << employees.at(4) << endl;

    return 0;
}

/* OUTPUT
    ------------Entries------------
    1: Noah
    2: Robert
    3: Mary
    4: Jennifer

    ------------Lookup by key------------
    Employee id: 1 name: Noah
    Employee id: 2 name: Robert
    Employee id: 3 name: Mary
    Employee id: 4 name: Jennifer
*/