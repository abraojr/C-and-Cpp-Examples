#include <iostream>

using std::cout;
using std::endl;

void some_function(int, float, double, char);

int main()
{
    int int_var = 200;
    float float_var = 345.45f;
    double double_var = 128.2;
    char char_var = 'A';

    some_function(int_var, float_var, double_var, char_var);

    cout << "int_var: " << int_var << endl;
    cout << "float_var: " << float_var << endl;
    cout << "double_var: " << double_var << endl;
    cout << "char_var: " << char_var << endl;

    return 0;
}

void some_function(int int_var, float float_var, double double_var, char char_var)
{
    cout << "Update local copies of variables" << endl;

    int_var += 100;
    float_var -= 20;
    double_var *= 2;
    char_var = 'X';
}

/* OUTPUT
    Update local copies of variables
    int_var: 200
    float_var: 345.45
    double_var: 128.2
    char_var: A
*/