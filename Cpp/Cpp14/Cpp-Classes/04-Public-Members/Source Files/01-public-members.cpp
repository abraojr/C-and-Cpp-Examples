#include <iostream>
#include <string>

using std::cout;
using std::string;

class Sprite
{
public:
    string name;
    int x, y;

    void print()
    {
        cout << name << " @ (" << x << "," << y << ")\n";
    }
};

int main()
{
    Sprite s;
    s.name = "Bob";
    s.x = 5;
    s.y = 10;

    s.print();

    return 0;
}

/* OUTPUT
    Bob @ (5,10)
*/