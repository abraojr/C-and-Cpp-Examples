#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int num_1, num_2;

    cout << "Please enter two numbers (separated by a space): " << endl;
    cin >> num_1 >> num_2;

    if (num_1 > num_2)
    {
        cout << num_1 << " is greater than " << num_2 << endl;
    }

    if (num_1 < num_2)
    {
        cout << num_1 << " is less than " << num_2 << endl;
    }

    if (num_1 == num_2)
    {
        cout << num_1 << " is equal to " << num_2 << endl;
    }

    return 0;
}

/* OUTPUT
    ## 1 test ##
    Please enter two numbers (separated by a space):
    750 100
    750 is greater than 100

    ## 2 test ##
    Please enter two numbers (separated by a space):
    100 101
    100 is less than 101

    ## 3 test ##
    Please enter two numbers (separated by a space):
    10 10
    10 is equal to 10
*/