#include <iostream>

using std::cout;
using std::endl;

int add(int num_a, int num_b)
{
    return num_a + num_b;
}

int add(int num_a, int num_b, int num_c)
{
    return num_a + num_b + num_c;
}

int add(int num_a, int num_b, int num_c, int num_d)
{
    return num_a + num_b + num_c + num_d;
}

int main()
{
    cout << "Adding 2 numbers: " << add(23, 45) << endl;
    cout << "Adding 3 numbers: " << add(11, 22, 33) << endl;
    cout << "Adding 4 numbers: " << add(10, 20, 30, 40) << endl;

    return 0;
}

/* OUTPUT
    Adding 2 numbers: 68
    Adding 3 numbers: 66
    Adding 4 numbers: 100
*/