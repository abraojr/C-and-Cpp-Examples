#include <iostream>
#include <stack>

using std::cout;
using std::stack;

int main()
{
    // 1. create stack container adapter
    stack<int> s({5, 8, 11, 74, 101});

    // 2. add to the stack
    cout << "top: " << s.top() << "\n";
    s.push(20);
    cout << "top: " << s.top() << "\n";
    s.push(200);
    cout << "top: " << s.top() << "\n";

    // 3. loop until empty
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << "\n";

    cout << "empty: " << std::boolalpha << s.empty() << "\n";

    return 0;
}

/* OUTPUT
    top: 101
    top: 20
    top: 200
    200 20 101 74 11 8 5
    empty: true
*/