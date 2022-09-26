#include <iostream>

#include "Student.h"

using std::cout;
using std::endl;

int main()
{
    Student *student_list = new Student[3]{};

    delete[] student_list;
    student_list = nullptr;
    cout << "End of main..." << endl;

    return 0;
}

/* OUTPUT
    Student no-argument constructor called
    Student no-argument constructor called
    Student no-argument constructor called
    Student destructor called:
    Student destructor called:
    Student destructor called:
    End of main...
*/