#include <iostream>
#include <string>

using std::cout;
using std::string;

class Sprite
{
    string name;
    int x, y;
    int *p;

public:
    Sprite(string s, int a, int b);
    ~Sprite();

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
    p = new int;
    *p = 0;
}

Sprite ::~Sprite()
{
    cout << "deconstructor ~Sprite\n";
    delete p;
}

int main()
{
    Sprite s("John", 2, 3);
    s.print();

    return 0;
}

/* OUTPUT
    John @ (2,3)
    deconstructor ~Sprite
*/