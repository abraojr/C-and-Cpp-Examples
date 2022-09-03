#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    char first_char;

    cout << "What is the first character in your name? ";

    // first_char = cin.get();
    cin.get(first_char);

    cout << "You entered " << first_char << endl;

    return 0;
}

/* OUTPUT
    What is the first character in your name?
    Abrâo
    You entered A
*/