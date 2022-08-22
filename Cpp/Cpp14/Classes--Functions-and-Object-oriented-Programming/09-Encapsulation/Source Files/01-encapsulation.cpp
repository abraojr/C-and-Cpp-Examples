#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>

using std::cout;

class Circle
{
private:
    double radius;
    double x, y;
    double circumference;
    double area;

    void update()
    {
        circumference = 2 * M_PI * radius;
        area = M_PI * radius * radius;
    }

public:
    Circle(double a, double b, double r) : x(a), y(b), radius(r)
    {
        update();
    }

    void changeRadius(double r)
    {
        radius = r;
        update();
    }

    void changePosition(double a, double b)
    {
        x = a;
        y = b;
    }

    double getArea()
    {
        return area;
    }

    double getCircumference()
    {
        return circumference;
    }

    void print()
    {
        cout << "x, y, radius: " << x << ", " << y << ", " << radius << "\n";
        cout << "area, circumference: " << area << ", " << circumference << "\n";
    }
};

int main()
{
    Circle c(1.0, 1.0, 2.0);
    c.print();
    c.changeRadius(5.5);
    c.print();
    c.changePosition(5.0, 6.7);
    c.print();

    return 0;
}

/* OUTPUT
    x, y, radius: 1, 1, 2
    area, circumference: 12.5664, 12.5664
    x, y, radius: 1, 1, 5.5
    area, circumference: 95.0332, 34.5575
    x, y, radius: 5, 6.7, 5.5
    area, circumference: 95.0332, 34.5575
*/