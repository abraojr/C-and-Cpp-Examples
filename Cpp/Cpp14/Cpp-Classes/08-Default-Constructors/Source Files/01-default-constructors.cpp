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
    cout << "default constructor\n";
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
    Sprite s1("Eamonn", 1, 2);
    s1.print();

    Sprite t;
    t.print();

    return 0;
}

/* OUTPUT
    Eamonn @ (1,2)
    default constructor
    @ (0,0)
*/