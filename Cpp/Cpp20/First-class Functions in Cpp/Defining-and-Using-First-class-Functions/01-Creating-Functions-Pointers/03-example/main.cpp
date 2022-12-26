#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

double add(double first_num, double second_num);

double subtract(double first_num, double second_num);

int main()
{
    auto compute_fn{add};

    cout << "------------Addition------------" << endl;
    cout << compute_fn(23.987, 65.398) << endl;

    compute_fn = subtract;

    cout << "------------Subtraction------------" << endl;
    cout << compute_fn(23.987, 65.398) << endl;

    return 0;
}

double add(double first_num, double second_num)
{
    return first_num + second_num;
}

double subtract(double first_num, double second_num)
{
    return first_num - second_num;
}

/* OUTPUT
    ------------Addition------------
    89.385
    ------------Subtraction------------
    -41.411
*/