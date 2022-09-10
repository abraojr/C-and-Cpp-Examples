#include <iostream>

using std::cout;
using std::endl;

auto power_of(double num, int times)
{
    double result = 1;
    for (int i = 0; i < times; i++)
    {
        result *= num;
    }

    return result;
}

int main()
{
    auto result = power_of(9, 3);

    cout << "9 to the power 3 = " << result << endl;
    cout << "result type: " << typeid(result).name() << endl;

    return 0;
}

/* OUTPUT
    9 to the power 3 = 729
    result type: d
*/