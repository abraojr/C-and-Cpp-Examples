#pragma once

#include <iostream>
#include <string>

#include "Browser.h"

class Firefox : public Browser
{
public:
    Firefox(std::string name)
    try : Browser(name)
    {
        throw std::exception();
    }
    catch (...) // Note the catch is after the closing curly brace of the function
    {

        /*Exception from the member initialization list and the
        constructor body are caught here*/
        std::cout << "Caught exception in initialization list or ctor body" << std::endl;

        /*If an exception is not thrown here explicitly the current
        exception will be rethrown*/
    }
};