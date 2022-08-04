float pi = 3.14159;

// If we declare a function as static, this function is only available within the file it was created

float compute_circle_area(float radius)
{
    return pi * radius * radius;
}

float compute_circle_circumference(float radius)
{
    return 2 * pi * radius;
}