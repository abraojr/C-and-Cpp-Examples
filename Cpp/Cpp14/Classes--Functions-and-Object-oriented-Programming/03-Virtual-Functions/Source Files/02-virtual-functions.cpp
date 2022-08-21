#include <iostream>

using std::cout;

class A
{
public:
    virtual char letter()
    {
        return 'A';
    }
};

class B : public A
{
public:
    char letter()
    {
        return 'B';
    }
};

int main()
{
    B b;
    A *a = &b;
    A &a2 = b;

    cout << "Letter (from a->letter()): " << a->letter() << "\n";
    cout << "Letter (from b.letter()): " << b.letter() << "\n";
    cout << "Letter (from a2.letter()): " << a2.letter() << "\n";

    return 0;
}

/* OUTPUT
    Letter (from a->letter()): B
    Letter (from b.letter()): B
    Letter (from a2.letter()): B
*/