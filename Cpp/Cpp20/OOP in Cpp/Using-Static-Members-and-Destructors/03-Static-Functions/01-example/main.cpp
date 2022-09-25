#include <iostream>

#include "Student.h"

using std::cout;
using std::endl;

int main()
{
    Student robert("Robert", 3.3f, "Chemistry");
    Student edward("Edward", 3.6f, "Chemistry");
    Student caroline("Caroline", 3.9f, "Math");
    Student george("George", 2.8f, "Chemistry");
    Student jackie("Jackie", 3.1f, "Math");

    cout << "Total number of student in Math (using object): "
         << george.get_major_count("Math") << endl;

    cout << "Total number of student in Chemistry (using class): "
         << Student::get_major_count("Chemistry") << endl;

    return 0;
}

/* OUTPUT
    Total number of student in Math (using object): 2
    Total number of student in Chemistry (using class): 3
*/