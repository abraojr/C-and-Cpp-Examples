#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int num_a, num_b;

    cout << "Please enter two integers: ";
    cin >> num_a >> num_b;

    cout << num_a << " + " << num_b << " = " << num_a + num_b << endl;
    cout << num_a << " - " << num_b << " = " << num_a - num_b << endl;
}

/* OUTPUT
    Please enter two integers:
    25
    37
    25 + 37 = 62
    25 - 37 = -12
*/