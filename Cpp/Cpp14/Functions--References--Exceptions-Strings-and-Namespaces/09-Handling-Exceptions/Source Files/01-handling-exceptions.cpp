#include <iostream>
#include <exception>

using std::bad_alloc;
using std::cout;

/*
    std::exception types

    bad_alloc
    bad_cast
    bad_exception
    bad_typeid
    bad_function_call
    bad_weak_ptr
*/

int main()
{
    try
    {
        throw 5.0;
    }
    catch (int i)
    {
        cout << "Caught exception: " << i << "\n";
    }
    catch (...)
    {
        cout << "Handle exception of unknown type.\n";
    }

    try
    {
        int *myarray = new int[10];
    }
    catch (bad_alloc &e)
    {
        cout << "Caught std::exception: " << e.what() << "\n";
    }

    return 0;
}

/* OUTPUT
    Handle exception of unknown type.
*/