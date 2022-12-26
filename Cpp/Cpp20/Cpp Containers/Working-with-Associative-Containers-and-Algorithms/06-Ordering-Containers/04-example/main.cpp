#include <iostream>
#include <set>

using std::cout;
using std::endl;
using std::greater;
using std::set;
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

void print_set(const set<Department, greater<Department>> &dept_set)
{
    for (auto &dept : dept_set)
    {
        cout << "Name: " << dept.name << " count: " << dept.emp_count << endl;
    }
}

int main()
{
    set<Department, greater<Department>> dept_set{
        Department("Sales", 20),
        Department("Operations", 35),
        Department("Engineering", 10),
        Department("HR", 2)};

    cout << endl << "---------------Ordered set---------------" << endl;
    print_set(dept_set);

    return 0;
}

/* OUTPUT
    ---------------Ordered set---------------
    Name: Operations count: 35
    Name: Sales count: 20
    Name: Engineering count: 10
    Name: HR count: 2
*/