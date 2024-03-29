#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int num_a = 78, num_b = 8;

    cout << "num_a + num_b = " << num_a + num_b << endl;
    cout << "num_a - num_b = " << num_a - num_b << endl;
    cout << "num_a * num_b = " << num_a * num_b << endl;
    cout << "num_a / num_b = " << num_a / num_b << endl;
    cout << "num_a % num_b = " << num_a % num_b << endl;

    return 0;
}

/* OUTPUT
    num_a + num_b = 86
    num_a - num_b = 70
    num_a * num_b = 624
    num_a / num_b = 9
    num_a % num_b = 6
*/