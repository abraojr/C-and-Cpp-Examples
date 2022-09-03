#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    char ch;
    cout << "Please enter a letter of the alphabet: ";

    cin >> ch;

    if (std::isalpha(ch))
    {

        switch (ch = std::tolower(ch); ch)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "The character you entered is a vowel" << endl;
            break;
        default:
            cout << "The character you entered is NOT a vowel" << endl;
        }
    }
    else
    {
        cout << "The character you entered is NOT a letter" << endl;
    }

    return 0;
}

/* OUTPUT
    ## test 1 ##
    Please enter a letter of the alphabet:
    r
    The character you entered is NOT a vowel

    ## test 2 ##
    Please enter a letter of the alphabet:
    E
    The character you entered is a vowel


    ## test 3 ##
    Please enter a letter of the alphabet:
    @
    The character you entered is NOT a letter
*/
