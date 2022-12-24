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

        try
        {
            if (num == -1)
            {
                throw "User terminated the program!";
            }
            cout << "Square of number is: " << num * num << endl;
        }
        catch (const char *message)
        {
            cout << "Goodbye..." << endl;
            break;
        }
    }

    return 0;
}

/* OUTPUT
    Please enter a number (-1 to exit): 5
    Square of number is: 25
    Please enter a number (-1 to exit): 8
    Square of number is: 64
    Please enter a number (-1 to exit): 11
    Square of number is: 121
    Please enter a number (-1 to exit): -1
    Goodbye...
*/