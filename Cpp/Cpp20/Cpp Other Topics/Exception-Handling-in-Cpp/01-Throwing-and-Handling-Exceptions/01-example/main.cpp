#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int num;

    while (true)
    {
        cout << "Please enter a number (-1 to exit): ";
        cin >> num;

        if (num == -1)
        {
            throw "User terminated the program!";
        }
        cout << "Square of number is: " << num * num << endl;
    }

    return 0;
}

/* OUTPUT
    Please enter a number (-1 to exit): 4
    Square of number is: 16
    Please enter a number (-1 to exit): 6
    Square of number is: 36
    Please enter a number (-1 to exit): 7
    Square of number is: 49
    Please enter a number (-1 to exit): -1
    terminate called after throwing an instance of 'char const*'
*/