#include <iostream>

#include "Circle.h"
#include "shape_util.h"

using std::cout;
using std::endl;

int main()
{
    Circle first_circle(10.0f);

    ::Circle second_circle(12.0f);

    cout << "Perimeter of first circle: " << get_perimeter(first_circle) << endl;
    cout << "Area of first circle: " << get_area(first_circle) << endl;

    cout << "Perimeter of second circle: " << get_perimeter(second_circle) << endl;
    cout << "Area of second circle: " << get_area(second_circle) << endl;

    return 0;
}

/* OUTPUT
    Perimeter of first circle: 62.8318
    Area of first circle: 314.159
    Perimeter of second circle: 75.3982
    Area of second circle: 452.389
*/