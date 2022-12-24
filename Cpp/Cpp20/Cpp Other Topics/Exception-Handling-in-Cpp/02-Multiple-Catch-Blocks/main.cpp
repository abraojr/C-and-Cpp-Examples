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

            if (num % 2 != 0)
            {
                throw num;
            }

            cout << "Square of number is: " << num * num << endl;
        }
        catch (const char *message)
        {
            cout << message << endl;
            break;
        }
        catch (int number)
        {
            cout << "You entered " << number << " which is an odd number, try again!" << endl;
            continue;
        }
    }

    cout << "Goodbye..." << endl;

    return 0;
}

/* OUTPUT #1
    Please enter a number (-1 to exit): 6
    Square of number is: 36
    Please enter a number (-1 to exit): -1
    User terminated the program!
    Goodbye...
*/

/* OUTPUT #2
    Please enter a number (-1 to exit): 3
    You entered 3 which is an odd number, try again!
    Please enter a number (-1 to exit): 5
    You entered 5 which is an odd number, try again!
    Please enter a number (-1 to exit): 8
    Square of number is: 64
    Please enter a number (-1 to exit): -1
    User terminated the program!
    Goodbye...
*/