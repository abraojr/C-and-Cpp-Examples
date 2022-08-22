#include <iostream>
#include <string>

using std::cout;
using std::string;

class Sprite
{
    string name;
    int x, y;
    friend class Forest;

public:
    Sprite() : name(""), x(0), y(0){};
    Sprite(string s, int a, int b) : name(s), x(a), y(b){};

    void print()
    {
        cout << name << " @ (" << x << "," << y << ")\n";
    }
};

class Forest
{
    Sprite a[10];

public:
    Forest()
    {
        char c = 'A';
        for (int i = 0; i < 10; i++)
        {
            a[i].name = string(1, c + i);
            a[i].x = i;
            a[i].y = i;
        }
    }

    void print()
    {
        for (int i = 0; i < 10; i++)
        {
            cout << a[i].name << " ";
        }
        cout << "\n";
    }
};

int main()
{
    Forest f;
    f.print();

    return 0;
}

/* OUTPUT
    A B C D E F G H I J
*/