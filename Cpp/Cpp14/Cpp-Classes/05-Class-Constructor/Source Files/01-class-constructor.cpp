#include <iostream>
#include <string>

using std::cout;
using std::string;

class Sprite
{
    string name;
    int x, y;

public:
    Sprite(string s, int a, int b);

    void print()
    {
        cout << name << " @ (" << x << "," << y << ")\n";
    }
};

Sprite::Sprite(string s, int a, int b)
{
    name = s;
    x = a;
    y = b;
}

int main()
{
    Sprite s("John", 1, 2);
    s.print();

    return 0;
}

/* OUTPUT
    John @ (1,2)
*/