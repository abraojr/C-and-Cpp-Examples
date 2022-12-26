#include <iostream>
#include <map>

using std::cout;
using std::endl;
using std::multimap;
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
        {"Sales", "James Petterson"},
        {"Engineering", "Sue Perkins"},
        {"Engineering", "Nina Tang"},
        {"HR", "Banner Boles"}};

    cout << endl << "------------Original entries------------" << endl;
    print_map(dept_employee_map);

    cout << endl << "------------Count------------" << endl;
    cout << "Count of Engineering employees: " << dept_employee_map.count("Engineering") << endl;
    cout << "Count of HR employees: " << dept_employee_map.count("HR") << endl;

    dept_employee_map.insert({"Sales", "Calvin Gundry"});

    cout << endl << "------------Entries (after insertion)------------" << endl;
    print_map(dept_employee_map);

    return 0;
}

/* OUTPUT
    ------------Original entries------------
    Engineering: Sue Perkins
    Engineering: Nina Tang
    HR: Banner Boles
    Sales: James Petterson

    ------------Count------------
    Count of Engineering employees: 2
    Count of HR employees: 1

    ------------Entries (after insertion)------------
    Engineering: Sue Perkins
    Engineering: Nina Tang
    HR: Banner Boles
    Sales: James Petterson
    Sales: Calvin Gundry
*/