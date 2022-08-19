#include <iostream>
#include <string>
#include <exception>
#include <new>

using std::bad_alloc;
using std::cout;
using std::nothrow;
using std::string;

int main()
{
    try
    {
        int *t = new int;
        delete t;
    }
    catch (bad_alloc e)
    {
        cout << e.what() << "\n";
        return 1;
    }

    string *s = new (nothrow) string();
    if (s == nullptr)
    {
        cout << "memory allocation error on: s\n";
        return 1;
    }
    delete (nothrow, s);

    char *c = new (nothrow) char[100];
    if (c == nullptr)
    {
        cout << "memory allocation error: c\n";
        return 1;
    }
    delete[](nothrow, c);

    return 0;
}