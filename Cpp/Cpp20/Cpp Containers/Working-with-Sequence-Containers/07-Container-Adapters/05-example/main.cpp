#include <iostream>
#include <queue>

using std::cout;
using std::endl;
using std::priority_queue;
using std::string;

int main()
{
    priority_queue<int> numbers_queue;

    numbers_queue.push(4004);
    numbers_queue.push(7007);
    numbers_queue.push(3003);

    cout << "---------------After adding 3 elements---------------" << endl;
    cout << "Element at top of the queue: " << numbers_queue.top() << endl;

    numbers_queue.push(9009);

    cout << "---------------After adding 9009---------------" << endl;
    cout << "Element at top of the queue: " << numbers_queue.top() << endl;

    numbers_queue.pop();
    numbers_queue.pop();

    cout << "---------------After popping (dequeuing) first two elements---------------" << endl;
    cout << "Element at top of the queue: " << numbers_queue.top() << endl;

    return 0;
}

/*  OUTPUT
    ---------------After adding 3 elements---------------
    Element at top of the queue: 7007
    ---------------After adding 9009---------------
    Element at top of the queue: 9009
    ---------------After popping (dequeuing) first two elements---------------
    Element at top of the queue: 4004
*/