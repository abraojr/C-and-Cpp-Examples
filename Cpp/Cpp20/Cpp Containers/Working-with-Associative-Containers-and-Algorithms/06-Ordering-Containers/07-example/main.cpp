#include <iostream>
#include <map>

using std::cout;
using std::endl;
using std::greater;
using std::map;
using std::string;

struct Department
{
    string name;
    int emp_count;

    Department(string name, int emp_count) : name(name), emp_count(emp_count) {}

    bool operator<(const Department &other) const
    {
        return emp_count < other.emp_count;
    }

    bool operator>(const Department &other) const
    {
        return emp_count > other.emp_count;
    }
};

void print_map(const map<Department, string, greater<Department>> &map)
{
    for (auto &entry : map)
    {
        cout << entry.first.name << " count: " << entry.first.emp_count << " head: " << entry.second << endl;
    }
}

int main()
{
    map<Department, string, greater<Department>> dept_head_map{
        {Department("Sales", 20), "Calvin Gundry"},
        {Department("Operations", 35), "Banner Boles"},
        {Department("Engineering", 25), "Sue Perkins"},
        {Department("HR", 3), "Nina Tang"}};

    cout << endl << "---------------Ordered map---------------" << endl;
    print_map(dept_head_map);

    return 0;
}

/* OUTPUT
    ---------------Ordered map---------------
    Operations count: 35 head: Banner Boles
    Engineering count: 25 head: Sue Perkins
    Sales count: 20 head: Calvin Gundry
    HR count: 3 head: Nina Tang
*/