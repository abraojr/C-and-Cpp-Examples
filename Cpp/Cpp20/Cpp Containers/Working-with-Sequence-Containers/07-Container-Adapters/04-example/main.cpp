#include <iostream>
#include <list>
#include <queue>

using std::cout;
using std::endl;
using std::list;
using std::queue;
using std::string;

int main()
{
    queue<string, list<string>> authors_queue;

    authors_queue.push("J.K. Rowling");
    authors_queue.push("George R. R. Martin");
    authors_queue.push("Ernest Hemingway");

    cout << "---------------After adding 3 elements---------------" << endl;
    cout << "Element at front of the queue: " << authors_queue.front() << endl;
    cout << "Element at back of the queue: " << authors_queue.back() << endl;

    authors_queue.push("Mark Twain");

    cout << "---------------After adding Mark Twain---------------" << endl;
    cout << "Element at front of the queue: " << authors_queue.front() << endl;
    cout << "Element at back of the queue: " << authors_queue.back() << endl;

    authors_queue.pop();
    authors_queue.pop();

    cout << "---------------After popping last two elements---------------" << endl;
    cout << "Element at front of the queue: " << authors_queue.front() << endl;
    cout << "Element at back of the queue: " << authors_queue.back() << endl;

    return 0;
}

/*  OUTPUT
    ---------------After adding 3 elements---------------
    Element at front of the queue: J.K. Rowling
    Element at back of the queue: Ernest Hemingway
    ---------------After adding Mark Twain---------------
    Element at front of the queue: J.K. Rowling
    Element at back of the queue: Mark Twain
    ---------------After popping last two elements---------------
    Element at front of the queue: Ernest Hemingway
    Element at back of the queue: Mark Twain
*/