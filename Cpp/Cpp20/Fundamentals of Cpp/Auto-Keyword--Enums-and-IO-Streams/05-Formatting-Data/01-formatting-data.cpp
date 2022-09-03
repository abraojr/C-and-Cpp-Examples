#include <iostream>
#include <string>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    float radius;

    cout << "Please enter the circle radius: ";
    cin >> radius;

    cout << "Area of the circle is : " << M_PI * radius * radius << endl;

    return 0;
}

/* OUTPUT
    Please enter the circle radius:
    5.25
    Area of the circle is : 86.5901
*/