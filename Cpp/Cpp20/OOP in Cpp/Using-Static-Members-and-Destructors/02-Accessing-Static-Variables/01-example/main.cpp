#include <iostream>

#include "Student.h"

using std::cout;
using std::endl;

int main()
{
    Student robert("Robert", 3.3f, "History");
    Student edward("Edward", 3.6f, "Political Science");
    Student caroline("Caroline", 3.9f, "Math");
    Student george("George", 2.8f, "Chemistry");
    Student jackie("Jackie", 3.1f, "Physics");

    cout << "Total number of student objects created (using object): "
         << george.student_count << endl;

    cout << "Total number of student objects created (using class): "
         << Student::student_count << endl;
}

/* OUTPUT
    We have created 1 student object(s)
    We have created 2 student object(s)
    We have created 3 student object(s)
    We have created 4 student object(s)
    We have created 5 student object(s)
    Total number of student objects created (using object): 5
    Total number of student objects created (using class): 5
*/