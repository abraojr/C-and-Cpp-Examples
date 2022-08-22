#include <iostream>

using std::cout;

template <class T>
class Position
{
    T x, y;

public:
    Position(T x, T y) : x(x), y(y) {}

    void print()
    {
        cout << "(" << x << "," << y << ")\n";
    }
};

int main()
{
    Position<int> p(1, 1);
    p.print();

    Position<double> q(10.0, 2.2);
    q.print();

    return 0;
}

/* OUTPUT
    (1,1)
    (10,2.2)
*/
