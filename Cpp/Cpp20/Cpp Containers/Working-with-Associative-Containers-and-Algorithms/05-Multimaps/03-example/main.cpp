#include <iostream>
#include <map>
#include <unordered_map>

using std::cout;
using std::endl;
using std::multimap;
using std::string;
using std::unordered_multimap;

void print_map(const multimap<string, string> &map)
{
    for (auto &entry : map)
    {
        cout << entry.first << ": " << entry.second << endl;
    }
}

void print_map(const unordered_multimap<string, string> &map)
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

    unordered_multimap<string, string> uo_dept_employee_map = {
        {"Sales", "Calvin Gundry"},
        {"Sales", "James Petterson"},
        {"Engineering", "Sue Perkins"},
        {"Engineering", "Nina Tang"},
        {"Sales", "Sophia Turner"},
        {"HR", "Banner Boles"},
        {"Operations", "Elsa Boomer"}};

    cout << endl << "------------Employees ordered------------" << endl;
    print_map(dept_employee_map);

    cout << endl << "------------Employees unordered------------" << endl;
    print_map(uo_dept_employee_map);

    return 0;
}

/* OUTPUT
    ------------Employees ordered------------
    Engineering: Sue Perkins
    Engineering: Nina Tang
    HR: Banner Boles
    Operations: Elsa Boomer
    Sales: Calvin Gundry
    Sales: James Petterson
    Sales: Sophia Turner

    ------------Employees unordered------------
    HR: Banner Boles
    Operations: Elsa Boomer
    Engineering: Nina Tang
    Engineering: Sue Perkins
    Sales: Sophia Turner
    Sales: James Petterson
    Sales: Calvin Gundry
*/