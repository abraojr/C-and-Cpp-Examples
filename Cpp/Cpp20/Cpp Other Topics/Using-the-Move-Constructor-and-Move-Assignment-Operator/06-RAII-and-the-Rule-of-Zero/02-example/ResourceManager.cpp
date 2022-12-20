#include <string>
#include <iostream>
#include <memory>

#include "ResourceManager.h"
#include "HeavyweightResource.h"

using std::cout;
using std::endl;
using std::make_shared;
using std::string;

ResourceManager::ResourceManager(string name) : name(name)
{
    cout << "Constructing resource manager: " << name << endl;
}

void ResourceManager::create_resource(string connection_string)
{
    resource.reset();
    resource = make_shared<HeavyweightResource>(connection_string);
}