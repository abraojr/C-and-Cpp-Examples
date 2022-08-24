#include <iostream>
#include <set>

using std::boolalpha;
using std::cout;
using std::set;

int main()
{
    // 1. create set
    set<int> s = {1, 2, 400};

    // 2. insert
    s.insert(20);
    s.insert(250);
    s.insert(1); // duplicate

    // 3. iterate
    for (auto itr = s.begin(); itr != s.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << "\n";
    cout << "size: " << s.size() << "\n";

    // 4. find
    auto itr = s.find(10);
    cout << "find(10): " << boolalpha << (itr != s.end()) << "\n";
    itr = s.find(20);
    cout << "find(20): " << boolalpha << (itr != s.end()) << "\n";

    return 0;
}

/* OUTPUT
    1 2 20 250 400
    size: 5
    find(10): false
    find(20): true
*/