#include <iostream>
#include <string>

using std::cout;
using std::string;

class MyString
{
    string text;

public:
    MyString(string s)
    {
        text = s;
    }

    void operator<<(string c)
    {
        text = c + text;
    }

    void operator>>(string c)
    {
        text = text + c;
    }

    void print()
    {
        cout << text << "\n";
    }
};

int main()
{
    MyString s("Hello, World!");
    s.print();
    s << "1. ";
    s.print();

    s >> " Bye, World!";
    s.print();

    return 0;
}

/* OUTPUT
   Hello, World!
    1. Hello, World!
    1. Hello, World! Bye, World!
*/