#include <iostream>

using std::cout;

class X
{
private:
    int a;

protected:
    void setA(int i) { a = i; }
    int getA() { return a; }
};

class Y : X
{
    int b;

public:
    void print()
    {
        cout << "a, b: " << getA() << ", " << b << "\n";
    }

    void set(int i, int j)
    {
        setA(i);
        b = j;
    }
};

int main()
{
    Y y;
    y.set(2, 1);
    y.print();

    return 0;
}

/* OUTPUT
    a, b: 2, 1
*/