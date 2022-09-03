#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    float radius;

    cout << "Please enter the circle radius: ";
    cin >> radius;

    cout << "Area of the circle is : " << std::scientific << std::setprecision(3)
         << M_PI * radius * radius << endl;

    return 0;
}

/* OUTPUT
    Please enter the circle radius:
    6.28
    Area of the circle is : 1.239e+02
*/