#pragma once
#include <vector>

template <typename T>
T smaller(T first, T second)
{
    return first < second ? first : second;
}

template <typename T>
void swap(T &first, T &second)
{
    T &temp = first;

    first = second;

    second = temp;
}

template <typename T>
void decorative_display(const T &something)
{
    std::cout << "**********************" << std::endl;
    std::cout << something << std::endl;
    std::cout << "**********************" << std::endl;
}