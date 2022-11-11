#pragma once
#include <iostream>

template <typename T>
class Stack
{
private:
    static inline int default_size = 10;
    int max_size;
    int current_size;
    T *elements;

public:
    Stack();

    explicit Stack(int max_size);

    int get_max_size() const;

    int get_current_size() const;

    ~Stack();
};

#include "Stack.cpp"