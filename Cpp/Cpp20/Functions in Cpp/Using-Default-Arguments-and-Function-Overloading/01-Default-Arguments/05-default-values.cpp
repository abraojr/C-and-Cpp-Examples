#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void greet(const string &name, const int &times = 2, const string &greeting = "How are you?");

int main()
{
    cout << "-----------------" << endl;
    greet("Hubert");

    cout << "-----------------" << endl;
    greet("Melania", 3);

    cout << "-----------------" << endl;
    greet("Laura", 3, "Hello!");

    return 0;
}

void greet(const string &name, const int &times, const string &greeting)
{
    for (int i = 0; i < times; i++)
    {
        cout << greeting << " " << name << endl;
    }
}

/* OUTPUT
    -----------------
    How are you? Hubert
    How are you? Hubert
    -----------------
    How are you? Melania
    How are you? Melania
    How are you? Melania
    -----------------
    Hello! Laura
    Hello! Laura
    Hello! Laura
*/