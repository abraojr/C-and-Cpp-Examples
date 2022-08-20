#include <iostream>

using std::cout;

struct Circle
{
    double radius;
    double x, y;

    void print()
    {
        cout << "x, y, radius: " << x << ", " << y << ", " << radius << "\n";
    }
};

int main()
{
    Circle c;
    c.x = 1.0;
    c.y = 1.0;
    c.radius = 5.0;

    c.print();

    return 0;
}

/* OUTPUT
    x, y, radius: 1, 1, 5
*/