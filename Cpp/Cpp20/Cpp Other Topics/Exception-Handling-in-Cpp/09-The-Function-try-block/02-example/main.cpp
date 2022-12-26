#include <exception>
#include <iostream>

#include "Firefox.h"

using std::cin;
using std::cout;
using std::endl;
using std::exception;

int main()
{
    try
    {
        Firefox firefox{"Firefox"};
    }
    catch (exception &ex)
    {
        cout << "An exception occurred initializing the browser! " << ex.what() << endl;
    }
}

/* OUTPUT
    Caught exception in initialization list or ctor body
    An exception occurred initializing the browser! std::exception
*/