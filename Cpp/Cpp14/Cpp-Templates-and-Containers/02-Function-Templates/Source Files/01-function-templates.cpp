#include <iostream>
#include <string>

using std::cout;
using std::string;

template <class T>
T DoubleIt(T x)
{
    return x + x;
}

int main()
{
    cout << "Double 5: " << DoubleIt(5) << "\n";                         // int
    cout << "Double 1.5: " << DoubleIt(1.5) << "\n";                     // double
    cout << "Double true: " << std::boolalpha << DoubleIt(true) << "\n"; // boolean
    // cout << "Double const char* \"Hello\": " << DoubleIt("Hello") << "\n"; // error compile
    string s = "World";
    cout << "Double string \"World\": " << DoubleIt(s) << "\n"; // string

    return 0;
}

/* OUTPUT
    Double 5: 10
    Double 1.5: 3
    Double true: true
    Double string "World": WorldWorld
*/
