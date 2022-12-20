#include <iostream>
#include <string>

#include "ResourceManager.h"

using std::cout;
using std::endl;
using std::string;

ResourceManager create_resource_manager(string name, string connection_string)
{
    ResourceManager rm{name, connection_string};

    cout << "Returning ResourceManager by value" << endl;
    return rm;
}

int main()
{
    ResourceManager rm = create_resource_manager("ResourceManager", "ConnectionString");

    rm = create_resource_manager("AnotherResourceManager", "AnotherConnectionString");

    cout << rm << endl;
    cout << "----------End of program - destructors----------" << endl;

    return 0;
}

/* OUTPUT
    Constructing resource: ConnectionString
    Constructing resource manager: ResourceManager
    Returning ResourceManager by value
    Constructing resource: AnotherConnectionString
    Constructing resource manager: AnotherResourceManager
    Returning ResourceManager by value
    Moving resource manager: ResourceManager
    Destructing resource: ConnectionString
    Destructing resource manager: AnotherResourceManager

    ***********************
    Name: AnotherResourceManager
    Resource connection string: AnotherConnectionString


    ***********************

    ----------End of program - destructors----------
    Destructing resource: AnotherConnectionString
    Destructing resource manager: AnotherResourceManager
*/