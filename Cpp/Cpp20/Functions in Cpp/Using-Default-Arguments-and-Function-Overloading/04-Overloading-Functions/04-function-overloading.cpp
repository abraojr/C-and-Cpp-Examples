#include <iostream>

using std::cout;
using std::endl;

double find_square(double num)
{
    cout << "find_square(double num) called" << endl;
    return num * num;
}

long find_square(long &num)
{
    cout << "find_square(long& num) called" << endl;
    return num * num;
}

int main()
{
    double double_num = 4;
    cout << find_square(double_num) << endl;

    int int_num = 5;
    cout << find_square(static_cast<long>(int_num)) << endl;

    long long_num = 6l;
    cout << find_square(long_num) << endl;

    return 0;
}

/* OUTPUT
    find_square(double num) called
    16
    find_square(double num) called
    25
    find_square(long& num) called
    36
*/