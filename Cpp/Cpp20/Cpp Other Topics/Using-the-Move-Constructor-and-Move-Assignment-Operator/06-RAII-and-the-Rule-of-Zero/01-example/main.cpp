#include <iostream>
#include <string>

#include "ResourceManager.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ResourceManager mysql_rm{"mysql"};

    mysql_rm.create_resource("mysql_conn_1");
    cout << mysql_rm << endl;

    mysql_rm.create_resource("mysql_conn_2");
    cout << mysql_rm << endl;

    cout << "----------End of program - destructors----------" << endl;

    return 0;
}

/* OUTPUT
    Constructing resource manager: mysql
    Constructing resource: mysql_conn_1

    ***********************
    Name: mysql
    Resource connection string: mysql_conn_1


    ***********************

    Destructing resource: mysql_conn_1
    Constructing resource: mysql_conn_2

    ***********************
    Name: mysql
    Resource connection string: mysql_conn_2


    ***********************

    ----------End of program - destructors----------
    Destructing resource: mysql_conn_2
*/