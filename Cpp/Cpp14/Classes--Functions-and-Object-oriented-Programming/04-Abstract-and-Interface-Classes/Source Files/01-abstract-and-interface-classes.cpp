#include <iostream>

using std::cout;

class L
{
public:
    virtual char letter() = 0;
    virtual int number() = 0;
};

class A : public L
{
public:
    char letter()
    {
        return 'A';
    }

    int number()
    {
        return 1;
    }
};

class B : public L
{
public:
    char letter()
    {
        return 'B';
    }

    int number()
    {
        return 2;
    }
};

int main()
{
    A a;
    B b;

    cout << "Letter (from a.letter()): " << a.letter() << "\n";
    cout << "Letter (from b.letter()): " << b.letter() << "\n\n";

    L *lp;
    lp = &a;
    cout << "lp (&a): " << lp->letter() << "\n\n";

    lp = &b;
    cout << "lp (&b): " << lp->letter() << "\n";

    cout << "lp->number(): " << lp->number() << "\n";

    return 0;
}

/* OUTPUT
    Letter (from a.letter()): A
    Letter (from b.letter()): B

    lp (&a): A

    lp (&b): B
    lp->number(): 2
*/