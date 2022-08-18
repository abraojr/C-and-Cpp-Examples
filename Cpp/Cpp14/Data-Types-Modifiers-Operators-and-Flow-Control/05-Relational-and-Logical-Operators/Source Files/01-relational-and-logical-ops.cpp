#include <iostream>

using std::cout;

int main()
{
    // relational
    bool r = 5 < 4;
    bool s = 5 > 4;
    bool t = 5 == 4.01; // implicit conversion
    bool u = 5 <= 4;
    bool v = 5 >= 4;

    cout << "5 < 4:  " << (5 < 4) << "\n"; // parentheses important
    cout << "5 > 4:  " << s << "\n";
    cout << "5 == 4.01:  " << t << "\n";
    cout << "5 <= 4:  " << u << "\n";
    cout << "5 >= 4:  " << v << "\n";

    // logical: AND, OR, NOT
    cout << "true AND true:  " << (true && true) << "\n";
    cout << "true AND false:  " << (true && false) << "\n";
    cout << "true OR flase:  " << (true || false) << "\n";
    cout << "NOT true:  " << (!true) << "\n";
    cout << "1 OR 0:  " << (1 || 0) << "\n";

    // precedence: !, &&, ||
    cout << "false || !false && true: " << (false || !false && true) << "\n";

    return 0;
}

/* OUTPUT
    5 < 4:  0
    5 > 4:  1
    5 == 4.01:  0
    5 <= 4:  0
    5 >= 4:  1
    true AND true:  1
    true AND false:  0
    true OR flase:  1
    NOT true:  0
    1 OR 0:  1
    false || !false && true: 1
*/