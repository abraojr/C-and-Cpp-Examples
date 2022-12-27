#include <iostream>

#include "function_objects.h"

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int main()
{
    string input_string;

    cout << "Please enter a string: ";
    getline(cin, input_string);

    StringLowercase string_lowercase;
    StringUppercase string_uppercase;

    cout << endl
         << "----------------Original String----------------" << endl;
    cout << input_string << endl;

    cout << endl
         << "----------------Lowercase String----------------" << endl;
    cout << string_lowercase.operator()(input_string) << endl;

    cout << endl
         << "----------------Uppercase String----------------" << endl;
    cout << string_uppercase(input_string) << endl;

    return 0;
}

/* OUTPUT
    Please enter a string: Abrao Junior

    ----------------Original String----------------
    Abrao Junior

    ----------------Lowercase String----------------
    abrao junior

    ----------------Uppercase String----------------
    ABRAO JUNIOR
*/