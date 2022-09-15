#include <iostream>

#include "Circle.h"

using std::cout;
using std::endl;

int main()
{
    Circle first_circle(10.0f);

    cout << "First circle's area: " << first_circle.get_area() << endl;

    cout << "--------------------------------" << endl;

    // cout << "Is first_circle larger than second_circle?: "
    //      << std::boolalpha << first_circle.is_larger(400.0f) << endl;  // compiler error
    return 0;
}

/* OUTPUT
    Constructing circle with radius: 10
    First circle's area: 314.159
    --------------------------------
*/