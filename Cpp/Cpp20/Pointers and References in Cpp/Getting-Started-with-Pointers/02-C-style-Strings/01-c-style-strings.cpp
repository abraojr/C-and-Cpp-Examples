#include <iostream>

using std::cout;
using std::endl;

int main()
{
    char letter{'V'};
    char *letter_ptr{&letter};

    int balance{1000};
    int *balance_ptr{&balance};

    float expenses{245.56F};
    float *expenses_ptr{&expenses};

    double salary{5000.456};
    double *salary_ptr{&salary};

    cout << "sizeof char: " << sizeof(letter) << endl;
    cout << "sizeof char*: " << sizeof(letter_ptr) << endl;

    cout << "---------" << endl;
    cout << "sizeof int: " << sizeof(balance) << endl;
    cout << "sizeof int*: " << sizeof(balance_ptr) << endl;

    cout << "---------" << endl;
    cout << "sizeof float: " << sizeof(expenses) << endl;
    cout << "sizeof float*: " << sizeof(expenses_ptr) << endl;

    cout << "---------" << endl;
    cout << "sizeof double: " << sizeof(salary) << endl;
    cout << "sizeof double*: " << sizeof(salary_ptr) << endl;

    return 0;
}

/* OUTPUT
    sizeof char: 1
    sizeof char*: 8
    ---------
    sizeof int: 4
    sizeof int*: 8
    ---------
    sizeof float: 4
    sizeof float*: 8
    ---------
    sizeof double: 8
    sizeof double*: 8
*/