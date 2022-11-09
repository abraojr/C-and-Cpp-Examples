#pragma once
#include <string>

template <typename T>
T smaller(T first, T second)
{
    std::cout << "T smaller(T first, T second)" << std::endl;
    return first < second ? first : second;
}

template <>
int *smaller(int *first, int *second)
{
    std::cout << "int* smaller(int* first, int* second)" << std::endl;
    return *first < *second ? first : second;
}

template <>
float *smaller(float *first, float *second)
{
    std::cout << "float* smaller(float* first, float* second)" << std::endl;
    return *first < *second ? first : second;
}

template <>
const char *smaller(const char *first, const char *second)
{
    std::cout << "const char *smaller(const char *first, const char *second)" << std::endl;

    std::string s1{first};
    std::string s2{second};

    return s1.length() < s2.length() ? first : second;
}

template <>
std::string smaller(std::string first, std::string second)
{
    std::cout << "std::string smaller(std::string first, std::string second)" << std::endl;

    return first.length() < second.length() ? first : second;
}

template <typename T>
T larger(T first, T second)
{
    std::cout << "T larger(T first, T second)" << std::endl;
    return first > second ? first : second;
}

template <>
int *larger(int *first, int *second)
{
    std::cout << "int* larger(int* first, int* second)" << std::endl;
    return *first > *second ? first : second;
}

template <>
float *larger(float *first, float *second)
{
    std::cout << "float* larger(float* first, float* second)" << std::endl;
    return *first > *second ? first : second;
}

template <>
const char *larger(const char *first, const char *second)
{
    std::cout << "const char *larger(const char *first, const char *second)" << std::endl;

    std::string s1{first};
    std::string s2{second};

    return s1.length() > s2.length() ? first : second;
}

template <>
std::string larger(std::string first, std::string second)
{
    std::cout << "std::string larger(std::string first, std::string second)" << std::endl;

    return first.length() > second.length() ? first : second;
}