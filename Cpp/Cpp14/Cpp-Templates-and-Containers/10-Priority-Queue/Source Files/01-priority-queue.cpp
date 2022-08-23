#include <iostream>
#include <queue>

using std::cout;
using std::priority_queue;

int main()
{
    // 1. create priority_queue
    priority_queue<int> pq;

    // 2. push
    pq.push(1);
    pq.push(10);
    pq.push(100);
    pq.push(50);

    // 3. access and pop
    cout << "size: " << pq.size() << "\n";
    cout << "top: " << pq.top() << "\n";
    pq.pop();
    cout << "(after pop) top: " << pq.top() << "\n";

    // 4. loop over pq in priority order
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << "\n";

    return 0;
}

/* OUTPUT
    size: 4
    top: 100
    (after pop) top: 50
    50 10 1
*/