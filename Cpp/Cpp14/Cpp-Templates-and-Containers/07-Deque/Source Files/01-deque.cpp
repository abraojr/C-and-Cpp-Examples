#include <iostream>
#include <deque>

using std::cout;
using std::deque;

int main()
{
    deque<int> dq;

    // 1. push front, push back
    dq.push_back(3);    // 3
    dq.push_front(1);   // 1, 3
    dq.push_back(4);    // 1, 3, 4
    dq.push_front(-10); // -10, 1, 3, 4

    // 2. iterate
    for (auto itr = dq.begin(); itr != dq.end(); ++itr)
    {
        cout << *itr << " ";
    }
    cout << "\n";

    for (auto itr = dq.rbegin(); itr != dq.rend(); ++itr)
    {
        cout << *itr << " ";
    }
    cout << "\n";

    // 3. front, [0], back
    cout << "front: " << dq.front() << "\n";
    cout << "[1]: " << dq[1] << "\n";
    cout << "back: " << dq.back() << "\n";

    // 4. pop, erase, clear, size
    dq.pop_back();
    dq.pop_front();

    auto itr = dq.begin();
    dq.erase(itr);

    dq.clear();
    cout << "size: " << dq.size() << "\n";

    return 0;
}

/* OUTPUT
    -10 1 3 4
    4 3 1 -10
    front: -10
    [1]: 1
    back: 4
    size: 0
*/