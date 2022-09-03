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
    else if (num_1 < num_2)
    {
        cout << num_1 << " is less than " << num_2 << endl;
    }
    else
    {
        cout << num_1 << " is equal to " << num_2 << endl;
    }

    return 0;
}

/* OUTPUT
    ## test 1 ##
    Please enter two numbers (separated by a space):
    90 45
    90 is greater than 45

    ## test 2 ##
    Please enter two numbers (separated by a space):
    20 150
    20 is less than 150

    ## test 3 ##
    Please enter two numbers (separated by a space):
    45 45
    45 is equal to 45
*/