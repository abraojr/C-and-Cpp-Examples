#include <iostream>
#include <map>

using std::cout;
using std::endl;
using std::multimap;
using std::pair;
using std::string;

void print_map(const multimap<string, string> &map)
{
    for (auto &entry : map)
    {
        cout << entry.first << ": " << entry.second << endl;
    }
}

int main()
{
    multimap<string, string> dept_employee_map = {
        {"Sales", "Calvin Gundry"},
        {"Sales", "James Petterson"},
        {"Engineering", "Sue Perkins"},
        {"Engineering", "Nina Tang"},
        {"Sales", "Sophia Turner"},
        {"HR", "Banner Boles"},
        {"Operations", "Elsa Boomer"}};

    pair<multimap<string, string>::iterator, multimap<string, string>::iterator> range_of_sales = dept_employee_map.equal_range("Sales");

    cout << endl << "------------Sales employees------------" << endl;
    for (auto i = range_of_sales.first; i != range_of_sales.second; i++)
    {
        cout << i->first << " -> " << i->second << endl;
    }

    cout << endl << "------------Employees in range------------" << endl;
    multimap<string, string>::iterator itlow = dept_employee_map.lower_bound("Engineering");
    multimap<string, string>::iterator itup = dept_employee_map.upper_bound("Operations");

    for (auto i = itlow; i != itup; i++)
    {
        cout << i->first << " -> " << i->second << endl;
    }

    dept_employee_map.erase("Sales");
    dept_employee_map.erase(dept_employee_map.find("HR"), dept_employee_map.end());

    cout << endl << "------------Employees (after erase)------------" << endl;
    print_map(dept_employee_map);

    return 0;
}

/* OUTPUT
    ------------Sales employees------------
    Sales -> Calvin Gundry
    Sales -> James Petterson
    Sales -> Sophia Turner

    ------------Employees in range------------
    Engineering -> Sue Perkins
    Engineering -> Nina Tang
    HR -> Banner Boles
    Operations -> Elsa Boomer

    ------------Employees (after erase)------------
    Engineering: Sue Perkins
    Engineering: Nina Tang
*/