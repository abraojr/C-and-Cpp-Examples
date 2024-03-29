#include <iostream>

using std::cout;
using std::endl;

int main()
{
    cout << "Size of short is " << sizeof(short int) << " bytes." << endl;
    cout << "Size of long is " << sizeof(long int) << " bytes." << endl;
    cout << "Size of long long is " << sizeof(long long int) << " bytes." << endl;

    return 0;
}

/* OUTPUT
    Size of short is 2 bytes.
    Size of long is 8 bytes.
    Size of long long is 8 bytes.
*/