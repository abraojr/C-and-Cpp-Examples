#include <iostream>
#include <list>

using std::cout;
using std::list;

int main()
{
    list<int> li;

    // 1. push, insert
    li.push_back(1);
    li.push_front(10);

    auto itr = li.begin();
    ++itr;
    li.insert(itr, 5);

    // 2. iterate
    for (auto it = li.begin(); it != li.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << "\n";

    // 3. front, [0], back, size
    cout << "front: " << li.front() << "\n";
    // cout << "[1]: "<<li[1] << "\n";       //error
    cout << "back: " << li.back() << "\n";
    cout << "size: " << li.size() << "\n";

    // 4. pop/erase/clear
    li.pop_front();
    li.pop_back();

    itr = li.begin();
    li.erase(itr);

    li.clear();

    return 0;
}

/* OUTPUT
    10 5 1
    front: 10
    back: 1
    size: 3
*/