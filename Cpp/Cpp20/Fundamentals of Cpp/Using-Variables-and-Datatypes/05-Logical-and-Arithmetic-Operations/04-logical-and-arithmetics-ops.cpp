#include <iostream>

using std::cout;
using std::endl;

int main()
{
    float num_a = 78.87f, num_b = 8.456f;

    cout << "num_a + num_b = " << num_a + num_b << endl;
    cout << "num_a - num_b = " << num_a - num_b << endl;
    cout << "num_a * num_b = " << num_a * num_b << endl;
    cout << "num_a / num_b = " << num_a / num_b << endl;

    return 0;
}

/* OUTPUT
    num_a + num_b = 87.326
    num_a - num_b = 70.414
    num_a * num_b = 666.925
    num_a / num_b = 9.3271
*/