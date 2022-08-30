#include <iostream>

using std::cout;
using std::endl;

int main()
{
    cout << "The size of char is: " << sizeof(char) << " byte." << endl;

    char lowercase_vowel = 'a';
    char uppercase_vowel = 'A';

    cout << "The lowercase vowel is: " << lowercase_vowel << endl;
    cout << "The uppercase vowel is: " << uppercase_vowel << endl;

    return 0;
}

/* OUTPUT
    The size of char is: 1 byte.
    The lowercase vowel is: a
    The uppercase vowel is: A
*/