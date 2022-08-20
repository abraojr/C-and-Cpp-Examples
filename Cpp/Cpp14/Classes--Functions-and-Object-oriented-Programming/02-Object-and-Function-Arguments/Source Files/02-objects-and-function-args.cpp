#include <iostream>
#include <string>

using std::cout;
using std::string;

class Sprite
{
    string name;
    int x, y;

public:
    Sprite() : name(""), x(0), y(0){};
    Sprite(string s, int a, int b) : name(s), x(a), y(b){};

    void print() const
    {
        cout << name << " @ (" << x << "," << y << ")\n";
    }
};

void SpriteOutput(const Sprite a, const Sprite *b, const Sprite &c)
{
    cout << "\n";
    cout << "a: " << &a << "\n";
    a.print();
    cout << "\n";

    cout << "b: " << b << "\n";
    b->print();
    cout << "\n";

    cout << "c: " << &c << "\n";
    c.print();
}

int main()
{
    Sprite a("Steve", 0, 0), b("Bob", 1, 1), c("Alice", 2, 2);

    cout << "a: " << &a << "\n";
    cout << "b: " << &b << "\n";
    cout << "c: " << &c << "\n";
    SpriteOutput(a, &b, c);

    return 0;
}

/* OUTPUT
    a: 0x7ffd086d1b60
    b: 0x7ffd086d1b90
    c: 0x7ffd086d1bc0

    a: 0x7ffd086d1bf0
    Steve @ (0,0)

    b: 0x7ffd086d1b90
    Bob @ (1,1)

    c: 0x7ffd086d1bc0
    Alice @ (2,2)
*/