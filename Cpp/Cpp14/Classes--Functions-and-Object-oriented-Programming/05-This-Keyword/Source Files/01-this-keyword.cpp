#include <iostream>

using std::cout;

class X
{
public:
    int i;

    void start(int j)
    {
        i = j;
        // Introduces 'i' again: potential ambiguity.
        for (int i = 0; i < 10; i++)
        {
            cout << (i * this->i) << " ";
        }
        cout << "\n";
    }
};

int main()
{
    X x;
    x.start(5);

    return 0;
}

/* OUTPUT
   0 5 10 15 20 25 30 35 40 45
*/