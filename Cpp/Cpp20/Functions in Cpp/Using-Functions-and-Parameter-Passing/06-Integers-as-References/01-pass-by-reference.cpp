#include <iostream>

using std::cout;
using std::endl;

void print_value(const double &num);
double &square_value(double &num);

int main()
{
    int int_var = 555;

    print_value(int_var);
    // square_value(int_var); // compile error

    return 0;
}

void print_value(const double &num)
{
    cout << "---Number is: " << num << "---" << endl;
}

double &square_value(double &num)
{
    num = num * num;

    return num;
}

/* OUTPUT
    ---Number is: 555---
*/