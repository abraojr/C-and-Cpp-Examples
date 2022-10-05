#include <iostream>
#include "PhdStudent.h"

using std::cout;
using std::endl;

int main()
{

    PhdStudent liz("Liz", 3.1f, "Biology", true, "Some hard topinc in Biology");
    PhdStudent terry("Terry", 3.5f, "English", true, "Some complex topic in English");

    cout << "-----------------------------------" << endl;

    return 0;
}

/* OUTPUT
    Student constructor: Liz
    GraduateStudent constructor: Liz
    PhdStudent constructor: Liz
    Student constructor: Terry
    GraduateStudent constructor: Terry
    PhdStudent constructor: Terry
    -----------------------------------
    PhdStudent destructor: Terry
    GraduateStudent destructor: Terry
    Student destructor: Terry
    PhdStudent destructor: Liz
    GraduateStudent destructor: Liz
    Student destructor: Liz
*/