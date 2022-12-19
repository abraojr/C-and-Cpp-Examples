#include <iostream>
#include <string>
#include <vector>

#include "ResourceManager.h"

using std::cout;
using std::endl;
using std::string;
using std::to_string;
using std::vector;

ResourceManager create_resource_manager(string name, string connection_string)
{
    ResourceManager rm{name, connection_string};

    cout << "Returning ResourceManager by value" << endl;
    return rm;
}

int main()
{
    string name_prefix = "ResourceManager-";
    string connection_string_prefix = "ConnectionString-";

    vector<ResourceManager> rm_vector;

    for (int i = 1; i < 2; i++)
    {
        string suffix = to_string(i);

        rm_vector.push_back(create_resource_manager(
            name_prefix + suffix, connection_string_prefix + suffix));
    }

    cout << "----------End of program - destructors----------" << endl;

    return 0;
}

/* OUTPUT
    Constructing resource: ConnectionString-1
    Constructing resource manager: ResourceManager-1
    Returning ResourceManager by value
    **Copy constructing resource manager: ResourceManager-1
    Destructing resource: ConnectionString-1
    Destructing resource manager: ResourceManager-1
    ----------End of program - destructors----------
    Destructing resource: ConnectionString-1
    Destructing resource manager: ResourceManager-1
*/