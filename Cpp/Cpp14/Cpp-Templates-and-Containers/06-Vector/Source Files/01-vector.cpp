#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main()
{
    vector<int> v;
    // 1. push, insert
    v.push_back(1);
    v.push_back(10);

    auto itr = v.begin();
    ++itr;
    v.insert(itr, 5);

    // 2. iterate
    for (auto itr = v.begin(); itr != v.end(); ++itr)
    {
        cout << *itr << " ";
    }
    cout << "\n";

    // 3. front, [0], back, size
    cout << "front: " << v.front() << "\n";
    cout << "[1]: " << v[1] << "\n";
    cout << "back: " << v.back() << "\n";
    cout << "size: " << v.size() << "\n";

    // 4. pop/erase/clear
    // v.pop_front(); // error
    v.pop_back();

    itr = v.begin();
    v.erase(itr);

    v.clear();

    return 0;
}

/* OUTPUT
    1 5 10
    front: 1
    [1]: 5
    back: 10
    size: 3
*/