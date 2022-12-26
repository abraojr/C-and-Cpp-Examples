#include <iostream>

#include "compute_functions.h"

using std::cin;
using std::cout;
using std::endl;

auto *get_compute_function(char op)
{
    double (*compute_fn)(double, double) = nullptr;

    switch (op)
    {
    case '+':
        compute_fn = add;
        break;
    case '-':
        compute_fn = subtract;
        break;
    case '*':
        compute_fn = multiply;
        break;
    case '/':
        compute_fn = divide;
        break;

    default:
        break;
    }

    return compute_fn;
}

int main()
{

    double first_num, second_num;
    char op;

    cout << "Please enter number and operation in this format 1.23 + 2.67: " << endl;
    cin >> first_num >> op >> second_num;

    double (*compute_fn)(double, double) = get_compute_function(op);

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

/* OUTPUT #1
    Please enter number and operation in this format 1.23 + 2.67:
    5.50 + 6.50
    Performing addition...
    12
*/

/* OUTPUT #2
    Please enter number and operation in this format 1.23 + 2.67:
    2.22 - 1.11
    Performing subtraction...
    1.11
*/

/* OUTPUT #3
    Please enter number and operation in this format 1.23 + 2.67:
    6.75 * 6.75
    Performing multiplication...
    45.5625
*/

/* OUTPUT #4
    Please enter number and operation in this format 1.23 + 2.67:
    12.0 / 7.00
    Performing division...
    1.71429
*/

/* OUTPUT #5
    Please enter number and operation in this format 1.23 + 2.67:
    6.00 | 4.56
    Unknown operation specified
*/