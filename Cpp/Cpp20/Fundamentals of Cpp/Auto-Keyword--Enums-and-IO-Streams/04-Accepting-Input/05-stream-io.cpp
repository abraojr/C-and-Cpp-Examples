#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    char some_char;

    cout << "What are the first three letters in your name? ";

    cin.get(some_char);
    cout << "First char in the stream " << some_char << endl;

    cin.get(some_char);
    cout << "Second char in the stream " << some_char << endl;

    cin.get(some_char);
    cout << "Third char in the stream " << some_char << endl;

    return 0;
}

/* OUTPUT
    What are the first three letters in your name?
    Abrao
    First char in the stream A
    Second char in the stream b
    Third char in the stream r
*/