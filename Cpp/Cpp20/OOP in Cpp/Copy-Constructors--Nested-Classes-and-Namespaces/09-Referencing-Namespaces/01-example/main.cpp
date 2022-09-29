#include <iostream>

#include "Shapes.h"
#include "shape_util.h"

using std::cout;
using std::endl;

using shapes::circle::Circle;
using shapes::square::Square;

int main()
{
    Circle first_circle(10.0f);

    cout << "Perimeter of first circle: " << shape_utilities::circle::get_perimeter(first_circle) << endl;
    cout << "Area of first circle: " << shape_utilities::circle::get_area(first_circle) << endl;

    Square first_square(10.0f);

    cout << "Perimeter of first square: " << shape_utilities::square::get_perimeter(first_square) << endl;
    cout << "Area of first square: " << shape_utilities::square::get_area(first_square) << endl;

    return 0;
}

/* OUTPUT
    Perimeter of first circle: 62.8318
    Area of first circle: 314.159
    Perimeter of first square: 40
    Area of first square: 100
*/