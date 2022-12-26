#include <deque>
#include <iostream>
#include <queue>

using std::cout;
using std::deque;
using std::endl;
using std::greater;
using std::priority_queue;
using std::string;

int main()
{
    priority_queue<int, deque<int>, greater<int>> numbers_queue;

    numbers_queue.push(4004);
    numbers_queue.push(7007);
    numbers_queue.push(3003);

    cout << "---------------After adding 3 elements---------------" << endl;
    cout << "Element at top of the queue: " << numbers_queue.top() << endl;

    numbers_queue.push(1001);

    cout << "---------------After adding 1001---------------" << endl;
    cout << "Element at top of the queue: " << numbers_queue.top() << endl;

    numbers_queue.pop();
    numbers_queue.pop();

    cout << "---------------After popping (dequeuing) first two elements---------------" << endl;
    cout << "Element at top of the queue: " << numbers_queue.top() << endl;

    return 0;
}

/*  OUTPUT
    ---------------After adding 3 elements---------------
    Element at top of the queue: 3003
    ---------------After adding 1001---------------
    Element at top of the queue: 1001
    ---------------After popping (dequeuing) first two elements---------------
    Element at top of the queue: 4004
*/