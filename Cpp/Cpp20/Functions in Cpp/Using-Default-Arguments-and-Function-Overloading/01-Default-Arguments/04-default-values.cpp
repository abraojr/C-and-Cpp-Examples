#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void greet(const string &name, const int &times, const string &greeting = "Howdy");

int main()
{
    cout << "-----------------" << endl;
    greet("Hubert", 5);

    cout << "-----------------" << endl;
    greet("Melania", 3, "Good morning!");

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
    Howdy Hubert
    Howdy Hubert
    Howdy Hubert
    Howdy Hubert
    Howdy Hubert
    -----------------
    Good morning! Melania
    Good morning! Melania
    Good morning! Melania
*/