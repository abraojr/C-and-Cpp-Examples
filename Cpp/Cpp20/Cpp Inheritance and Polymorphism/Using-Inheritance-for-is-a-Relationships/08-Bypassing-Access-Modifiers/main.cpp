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
    cout << "Name: " << ethan.get_name() << endl;
    cout << "GPA: " << ethan.get_gpa() << endl;
    cout << "Major: " << ethan.get_major() << endl;
    cout << "Has scholarship: " << std::boolalpha << ethan.has_scholarship() << endl;
    cout << "GPA (using variable): " << ethan.gpa << endl;
    cout << "Major (using variable): " << ethan.major << endl;

    cout << "---Access from derived class---" << endl;
    vera.display_info();

    return 0;
}

/* OUTPUT
    ---Access from outside class---
    Name: Ethan
    GPA: 3.7
    Major: Computer Science
    Has scholarship: false
    GPA (using variable): 3.7
    Major (using variable): Computer Science
    ---Access from derived class---
    Name: Vera
    GPA: 3.9
    Major: Math
    Has scholarship: true
*/