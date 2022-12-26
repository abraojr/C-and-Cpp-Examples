#include <iostream>

using std::cin;
using std::cout;
using std::endl;

double add(double first_num, double second_num);

double subtract(double first_num, double second_num);

double multiply(double first_num, double second_num);

double divide(double first_num, double second_num);

int main()
{
    double (*compute_fn)(double, double) = nullptr;

    double first_num, second_num;
    char op;

    cout << "Please enter number and operation in this format 1.23 + 2.67: " << endl;
    cin >> first_num >> op >> second_num;

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

double add(double first_num, double second_num)
{
    cout << "Performing addition..." << endl;
    return first_num + second_num;
}

double subtract(double first_num, double second_num)
{
    cout << "Performing subtraction..." << endl;
    return first_num - second_num;
}

double multiply(double first_num, double second_num)
{
    cout << "Performing multiplication..." << endl;
    return first_num * second_num;
}

double divide(double first_num, double second_num)
{
    cout << "Performing division..." << endl;
    return first_num / second_num;
}

/* OUTPUT #1
    Please enter number and operation in this format 1.23 + 2.67:
    66.33 + 33.77
    Performing addition...
    100.1
*/

/* OUTPUT #2
    Please enter number and operation in this format 1.23 + 2.67:
    85.27 - 54.22
    Performing subtraction...
    31.05
*/

/* OUTPUT #3
    Please enter number and operation in this format 1.23 + 2.67:
    12.50 * 4.00
    Performing multiplication...
    50
*/

/* OUTPUT #4
    Please enter number and operation in this format 1.23 + 2.67:
    5.00 / 2.00
    Performing division...
    2.5
*/

/* OUTPUT #5
    Please enter number and operation in this format 1.23 + 2.67:
    2.00 & 2.00
    Unknown operation specified
*/