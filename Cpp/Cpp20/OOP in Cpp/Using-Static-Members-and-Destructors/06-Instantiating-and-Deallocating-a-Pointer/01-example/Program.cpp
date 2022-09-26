#include <string>
#include <iostream>

#include "Program.h"

using std::cout;
using std::endl;
using std::string;

Program::Program(string major) : major(major)
{
    cout << "Program constructor called: " << major << endl;
}

string Program::get_major() const
{
    return major;
}

Program::~Program()
{
    cout << "Program destructor called: " << major << endl;
}
