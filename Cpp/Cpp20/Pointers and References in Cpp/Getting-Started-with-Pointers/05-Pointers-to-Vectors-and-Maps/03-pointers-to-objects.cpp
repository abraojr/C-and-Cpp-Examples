#include <iostream>
#include <string>
#include <map>

using std::cout;
using std::endl;
using std::map;
using std::string;

int main()
{
    string name_1{"Alice Smith"};
    string name_2{"Bob McCarthy"};
    string name_3{"Charles Babbage"};
    string name_4{"Dora Jones"};

    map<int, string *> employees_map{
        {111, &name_1},
        {222, &name_2},
        {333, &name_3},
        {444, &name_4}};

    for (auto &employee : employees_map)
    {
        cout << employee.first << ": " << *employee.second << endl;
        cout << "Length of employee name: " << (employee.second)->length() << endl;
    }

    return 0;
}

/* OUTPUT
    111: Alice Smith
    Length of employee name: 11
    222: Bob McCarthy
    Length of employee name: 12
    333: Charles Babbage
    Length of employee name: 15
    444: Dora Jones
    Length of employee name: 10
*/