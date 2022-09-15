#pragma once
#include <cmath>

struct Circle
{
    float radius;

    Circle(float r);

    float get_area()
    {
        return M_PI * radius * radius;
    }

    bool is_larger(Circle other_circle);
};
