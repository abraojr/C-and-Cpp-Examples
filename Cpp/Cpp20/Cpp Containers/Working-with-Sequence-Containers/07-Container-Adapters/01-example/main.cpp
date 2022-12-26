#include <iostream>
#include <stack>

using std::cout;
using std::endl;
using std::stack;
using std::string;

int main()
{
    stack<string> authors_stack;

    authors_stack.push("J.K. Rowling");
    authors_stack.push("George R. R. Martin");
    authors_stack.push("Ernest Hemingway");

    cout << "---------------After adding 3 elements---------------" << endl;
    cout << "Element at top of stack: " << authors_stack.top() << endl;

    authors_stack.push("Mark Twain");

    cout << "---------------After adding Mark Twain---------------" << endl;
    cout << "Element at top of stack: " << authors_stack.top() << endl;

    authors_stack.pop();
    authors_stack.pop();

    cout << "---------------After popping last two elements---------------" << endl;
    cout << "Element at top of stack: " << authors_stack.top() << endl;

    return 0;
}

/*  OUTPUT
    ---------------After adding 3 elements---------------
    Element at top of stack: Ernest Hemingway
    ---------------After adding Mark Twain---------------
    Element at top of stack: Mark Twain
    ---------------After popping last two elements---------------
    Element at top of stack: George R. R. Martin
*/