#include <iostream>
#include "GraduateStudent.h"

using std::cout;
using std::endl;

int main()
{

    GraduateStudent liz("Liz", 3.1f, "Biology", true);
    GraduateStudent terry("Terry", 3.5f, "English", true);

    cout << "-----------------------------------" << endl;

    return 0;
}

/* OUTPUT
    Student constructor: Liz
    GraduateStudent constructor: Liz
    Student constructor: Terry
    GraduateStudent constructor: Terry
    -----------------------------------
    GraduateStudent destructor: Terry
    Student destructor: Terry
    GraduateStudent destructor: Liz
    Student destructor: Liz
*/