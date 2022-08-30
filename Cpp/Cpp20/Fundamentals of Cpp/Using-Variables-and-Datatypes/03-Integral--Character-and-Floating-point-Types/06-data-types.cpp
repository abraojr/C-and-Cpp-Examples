#include <iostream>

using std::cout;
using std::endl;

int main()
{
    char newline = '\n';
    char tab_horizontal = '\t';
    char tab_vertical = '\v';

    cout << "I"
         << newline << " solemnly"
         << tab_horizontal << " swear"
         << tab_vertical << "that, \n I \v am \\ upto no \" good" << endl;

    return 0;
}

/* OUTPUT
    I
      solemnly      swear
                        that, 
    I 
      am \ upto no " good


** Process exited - Return Code: 0 **
*/