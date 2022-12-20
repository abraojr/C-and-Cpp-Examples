#include <iostream>
#include <string>

#include "ResourceManager.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ResourceManager mysql_rm{"mysql"};
    mysql_rm.create_resource("mysql_conn");

    ResourceManager mysql_rm_copy{mysql_rm};

    {
        ResourceManager another_mysql_rm{"another_mysql"};
        another_mysql_rm.create_resource("another_mysql_conn");

        another_mysql_rm = mysql_rm;
    }

    cout << "----------End of program - destructors----------" << endl;

    return 0;
}

/* OUTPUT
    Constructing resource manager: mysql
    Constructing resource: mysql_conn
    Constructing resource manager: another_mysql
    Constructing resource: another_mysql_conn
    Destructing resource: another_mysql_conn
    ----------End of program - destructors----------
    Destructing resource: mysql_conn
*/