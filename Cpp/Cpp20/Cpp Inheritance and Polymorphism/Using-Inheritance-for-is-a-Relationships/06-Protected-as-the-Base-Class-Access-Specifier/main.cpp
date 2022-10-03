#include <iostream>
#include "GraduateStudent.h"

using std::cout;
using std::endl;

int main()
{
    GraduateStudent ethan;
    GraduateStudent vera;

    /* All of them are inaccessible
    ethan.set_name("Ethan");
    ethan.set_gpa(3.7f);
    ethan.set_major("Computer Science");
    */
    ethan.set_scholarship(false);

    /* All of them are inaccessible
    vera.set_name("Vera");
    vera.set_gpa(3.9f);
    vera.set_major("Math");
    */
    vera.set_scholarship(true);

    /* All of them are inaccessible
    cout << "Name: " << ethan.name << endl;
    cout << "GPA: " << ethan.gpa << endl;
    cout << "Major: " << ethan.major << endl;
    cout << "Has scholarship: " << std::boolalpha << ethan.scholarship << endl;
    */

    return 0;
}
