#include <iostream>

using std::cout;

class Circle
{
    double radius;
    double x, y;

public:
    Circle(double a, double b, double r) : x(a), y(b), radius(r) {}

    // overload +: adds the radius of another circle
    Circle operator+(const Circle &b)
    {
        return Circle(x, y, radius + b.radius);
    }

    // overload -: subtracts the radius of another circle (up to zero)
    Circle operator-(const Circle &b)
    {
        Circle t(x, y, radius - b.radius);

        if (t.radius < 0.0)
            t.radius = 0.0;

        return t;
    }

    void print()
    {
        cout << "x, y, radius: " << x << ", " << y << ", " << radius << "\n";
    }
};

int main()
{
    Circle b(0.0, 0.0, 1.0), c(1.0, 1.0, 5.0), d(2.0, 2.5, 12.0);
    cout << "b: ";
    b.print();
    cout << "c: ";
    c.print();
    cout << "d: ";
    d.print();

    cout << "c = c + d\n";
    c = c + d;
    cout << "c: ";
    c.print();
    cout << "d: ";
    d.print();

    cout << "b = b - c\n";
    b = b - c;
    cout << "b: ";
    b.print();

    return 0;
}

/* OUTPUT
    b: x, y, radius: 0, 0, 1
    c: x, y, radius: 1, 1, 5
    d: x, y, radius: 2, 2.5, 12
    c = c + d
    c: x, y, radius: 1, 1, 17
    d: x, y, radius: 2, 2.5, 12
    b = b - c
    b: x, y, radius: 0, 0, 0
*/