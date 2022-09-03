#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int main()
{
    string first_string;
    string second_string;

    cout << "Please enter the first string: ";
    getline(cin, first_string);

    cout << "Please enter the second string: ";
    getline(cin, second_string);

    if (first_string == second_string)
    {
        cout << "The two strings you entered are the same!" << endl;
    }

    if (first_string < second_string)
    {
        cout << "The first string is lexicographically before the second string" << endl;
    }

    if (first_string > second_string)
    {
        cout << "The first string is lexicographically after the second string" << endl;
    }

    return 0;
}

/* OUTPUT
    ## test 1 ##
    Please enter the first string:
    Greg
    Please enter the second string:
    Jane
    The first string is lexicographically before the second string

    ## test 2 ##
    Please enter the first string:
    Susan
    Please enter the second string:
    Jane
    The first string is lexicographically after the second string

    ## test 3 ##
    Please enter the first string:
    Julia
    Please enter the second string:
    Julia
    The two strings you entered are the same!

    ## test 4 ##
    Please enter the first string:
    Julia
    Please enter the second string:
    julia
    The first string is lexicographically before the second string
*/