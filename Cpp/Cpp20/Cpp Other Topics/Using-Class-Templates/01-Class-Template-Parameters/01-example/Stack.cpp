#include <string>
#include <iostream>

#include "Stack.h"

using std::cout;
using std::endl;
using std::string;

template <typename T>
Stack<T>::Stack() : max_size(default_size), current_size(0), elements(new T[max_size]) {}

template <typename T>
Stack<T>::Stack(int max_size) : max_size(max_size), current_size(0), elements(new T[max_size]) {}

template <typename T>
int Stack<T>::get_max_size() const
{
    return max_size;
}

template <typename T>
int Stack<T>::get_current_size() const
{
    return current_size;
}

template <typename T>
Stack<T>::~Stack()
{
    delete[] elements;
}
