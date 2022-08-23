#include <iostream>
#include <queue>

using std::cout;
using std::queue;

int main()
{
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(10);
    q.push(20);

    cout << "size: " << q.size() << "\n";
    cout << "front: " << q.front() << "\n";
    q.pop();
    cout << "(after pop) front: " << q.front() << "\n";

    cout << "empty: " << std::boolalpha << q.empty() << "\n";
    q.pop();
    q.pop();
    q.pop();
    cout << "(after pops) empty: " << std::boolalpha << q.empty() << "\n";

    return 0;
}

/* OUTPUT
    size: 4
    front: 1
    (after pop) front: 2
    empty: false
    (after pops) empty: true
*/