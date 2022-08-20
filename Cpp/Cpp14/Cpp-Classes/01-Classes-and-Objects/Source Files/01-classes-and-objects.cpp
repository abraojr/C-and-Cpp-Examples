#include <iostream>

using std::cout;

class line
{
public:
    // slope: y = mx + b
    double m, b;

    void set(double i, double j)
    {
        m = i;
        b = j;
    }

    double findY(double x);
};

double line::findY(double x)
{
    return m * x + b;
}

int main()
{
    line a;
    a.set(2.0, 10.0);
    cout << "Y: " << a.findY(5.0) << "\n";

    return 0;
}

/* OUTPUT
    Y: 20
*/