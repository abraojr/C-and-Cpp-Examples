#include <iostream>

using std::cout;

class point
{
private: // by default it is private, you don't need to set it
    int x, y;

public:
    void setXY(int a, int b)
    {
        x = a;
        y = b;
    }

    void print()
    {
        cout << x << ", " << y << "\n";
    }
};

int main()
{
    point p;
    p.setXY(1, 1);
    p.print();

    return 0;
}

/* OUTPUT
    1, 1
*/