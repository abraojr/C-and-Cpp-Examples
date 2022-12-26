#pragma once

#include <string>

#include "Browser.h"

class Firefox : public Browser
{
public:
    Firefox(std::string name) : Browser(name) {}
};