#include <iostream>

using std::cout;

int main()
{
    int i = 10;
    bool b = true;

    if (i == 10)
        cout << "i is 10\n";
    else
        cout << "i is not 10\n";

    if (i > 0)
    {
        cout << "i > 0\n";
    }
    else if (i < 0)
    {
        cout << "i < 0\n";
    }
    else
    {
        // i == 0
        cout << "else ... i == 0\n";
        if (!b)
        {
            cout << "b is false\n";
        }
        else
        {
            cout << "else b is true\n";
        }
    }

    return 0;
}

/* OUTPUT
    i is 10
    i > 0
*/