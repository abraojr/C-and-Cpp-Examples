#include <iostream>

#include "Container.h"

using std::cout;
using std::endl;

template <typename T>
Container<T>::Container(T element) : element(element) {}

template <typename T>
const T Container<T>::get_element() const
{
    return element;
}

template <typename T>
bool Container<T>::operator>(const Container<T> &other) const
{
    return element > other.element;
}

template <typename T>
bool Container<T>::operator<(const Container<T> &other) const
{
    return element < other.element;
}