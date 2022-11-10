#pragma once
#include <string>

template <typename T>
T smaller(T first, T second)
{
    std::cout << "template T smaller(T first, T second)" << std::endl;
    return first < second ? first : second;
}

std::string smaller(std::string first, std::string second)
{
    std::cout << "overloaded string smaller(string first, string second)" << std::endl;

    return first.length() < second.length() ? first : second;
}

template <typename T>
T larger(T first, T second)
{
    std::cout << "template T larger(T first, T second)" << std::endl;
    return first > second ? first : second;
}

std::string larger(std::string first, std::string second)
{
    std::cout << "overloaded string larger(string first, string second)" << std::endl;

    return first.length() > second.length() ? first : second;
}