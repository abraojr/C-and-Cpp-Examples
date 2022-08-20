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
    Sprite(string s);
    Sprite(int a, int b);

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

Sprite::Sprite(string s)
{
    name = s;
    x = 0;
    y = 0;
}

Sprite::Sprite(int a, int b)
{
    name = "(unnamed)";
    x = a;
    y = b;
}

int main()
{
    Sprite s1("John", 2, 3);
    s1.print();

    Sprite s2("Bob");
    s2.print();

    Sprite s3(10, 10);
    s3.print();

    return 0;
}

/* OUTPUT
    John @ (2,3)
    Bob @ (0,0)
    (unnamed) @ (10,10)
*/