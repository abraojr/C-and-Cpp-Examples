#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string proverb_1 = "A ship in the harbor is safe, but what is not what a ship is for.";
    string proverb_2 = "Never test the depth of water with both feet.";

    cout << "proverb_1: " << proverb_1 << endl;
    cout << "length of proverb_1: " << proverb_1.length() << endl;

    cout << "proverb_2: " << proverb_2 << endl;
    cout << "length of proverb_2: " << proverb_2.length() << endl;

    return 0;
}

/* OUTPUT
    proverb_1: A ship in the harbor is safe, but what is not what a ship is for.
    length of proverb_1: 65
    proverb_2: Never test the depth of water with both feet.
    length of proverb_2: 45
*/