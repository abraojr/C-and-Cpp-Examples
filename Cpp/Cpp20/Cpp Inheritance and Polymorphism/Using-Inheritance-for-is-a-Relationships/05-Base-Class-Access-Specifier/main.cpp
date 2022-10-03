#include <iostream>
#include "GraduateStudent.h"

using std::cout;
using std::endl;

int main()
{
    GraduateStudent ethan;
    GraduateStudent vera;

    ethan.set_name("Ethan");
    ethan.set_gpa(3.7f);
    ethan.set_major("Computer Science");
    ethan.set_scholarship(false);

    vera.set_name("Vera");
    vera.set_gpa(3.9f);
    vera.set_major("Math");
    vera.set_scholarship(true);

    cout << "---Access from outside class---" << endl;
    // cout << "Name: " << ethan.name << endl;
    // cout << "GPA: " << ethan.gpa << endl;
    cout << "Major: " << ethan.major << endl;
    // cout << "Has scholarship: " << std::boolalpha << ethan.scholarship << endl;

    cout << "---Access from derived class---" << endl;
    vera.display_info();

    return 0;
}

/* OUTPUT
    ---Access from outside class---
    Major: Computer Science
    ---Access from derived class---
    Name: Vera
    GPA: 3.9
    Major: Math
    Has scholarship: true
*/