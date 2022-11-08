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