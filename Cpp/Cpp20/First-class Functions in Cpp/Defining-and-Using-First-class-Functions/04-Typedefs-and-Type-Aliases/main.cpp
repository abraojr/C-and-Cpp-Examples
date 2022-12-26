#include <iostream>

#include "compute_functions.h"

using std::cin;
using std::cout;
using std::endl;

// using ArithmeticFn = double (*)(double, double); -> this is an example of type alias

typedef double (*ArithmeticFn)(double, double); // using typedef

ArithmeticFn get_compute_function(char op)
{
    switch (op)
    {
    case '+':
        return add;
        break;
    case '-':
        return subtract;
        break;
    case '*':
        return multiply;
        break;
    case '/':
        return divide;
        break;
    }

    return nullptr;
}

int main()
{

    double first_num, second_num;
    char op;

    cout << "Please enter number and operation in this format 1.23 + 2.67: " << endl;
    cin >> first_num >> op >> second_num;

    ArithmeticFn compute_fn = get_compute_function(op);

    if (compute_fn != nullptr)
    {
        cout << compute_fn(first_num, second_num) << endl;
    }
    else
    {
        cout << "Unknown operation specified" << endl;
    }

    return 0;
}

/* OUTPUT
    Please enter number and operation in this format 1.23 + 2.67:
    12.57 * 3.50
    Performing multiplication...
    43.995
*/