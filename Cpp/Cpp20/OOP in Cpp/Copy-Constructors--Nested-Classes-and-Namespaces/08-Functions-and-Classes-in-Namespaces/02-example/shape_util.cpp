#include "Circle.h"
#include "constants.h"
#include "shape_util.h"

namespace shape_utilities
{
    float get_perimeter(const shapes::Circle &circle)
    {
        return 2 * constants::pi * circle.get_radius();
    }

    float get_area(const shapes::Circle &circle)
    {
        return constants::pi * circle.get_radius() * circle.get_radius();
    }
}