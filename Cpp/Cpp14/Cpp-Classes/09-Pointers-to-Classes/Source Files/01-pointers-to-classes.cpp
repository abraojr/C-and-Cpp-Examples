#include <iostream>
#include <string>

using std::cout;
using std::string;

class Sprite
{
    string name;
    int x, y;

public:
    Sprite();
    Sprite(string s, int a, int b);

    void print()
    {
        cout << name << " @ (" << x << "," << y << ")\n";
    }
};

Sprite::Sprite()
{
    cout << "Sprite: default constructor\n";
    name = "";
    x = 0;
    y = 0;
}

Sprite::Sprite(string s, int a, int b)
{
    name = s;
    x = a;
    y = b;
}

int main()
{
    Sprite *s = new Sprite("Eamonn", 1, 2);
    s->print();
    delete s;

    Sprite *t;
    t = new Sprite;
    t->print();
    delete t;

    return 0;
}

/* OUTPUT
    Eamonn @ (1,2)
    Sprite: default constructor
    @ (0,0)
*/