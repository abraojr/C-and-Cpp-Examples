#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int fav_num;
    char fav_letter;

    cout << "What is your favorite number?: ";
    cin >> fav_num;

    cout << "Favorite number is: " << fav_num << endl;

    cin.ignore();

    cout << "What is your favorite character (hit enter to quit)?: ";
    cin.get(fav_letter);

    if (fav_letter == '\n')
    {
        cout << "Exiting..." << endl;
    }
    else
    {
        cout << "Favorite letter is: " << fav_letter << endl;
    }

    return 0;
}

/* OUTPUT
    ## 1 test ##

    What is your favorite number?:
    27
    Favorite number is: 27
    What is your favorite character (hit enter to quit)?:
    A
    Favorite letter is: A

    ## 2 test ##

    What is your favorite number?:
    27
    Favorite number is: 27
    What is your favorite character (hit enter to quit)?:

    Exiting...
*/