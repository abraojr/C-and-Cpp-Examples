#include <iostream>

// void: empty type. "incomplete"
void myFunction() {}

int main()
{
    // interesting types
    void *v_ptr;
    // std::nullptr_t: a typesafe definition of null
    v_ptr = nullptr;
    bool b;
    b = true;
    b = false;

    // common types
    char c;
    int i;
    double d;

    // common modifiers: signed, unsigned, short, long, long long
    signed char sc;    // at least 8 bits
    signed short ss;   // at least 16 bits
    long int li;       // at least 32 bits
    long long int lli; // at least 64 bits

    // character types
    char c8;      // at least 8 bits (UTF-8)
    wchar_t wc;   // largest character set supported
    char16_t c16; // at least 16 bits (UTF-16)
    char32_t c32; // at least 32 bits (UTF-32)

    // floating point types: typically IEEE-754 format
    float f;        // typically 32 bits
    double db;      // typically 64 bits
    long double ld; // typically 80 bits

    return 0;
}
