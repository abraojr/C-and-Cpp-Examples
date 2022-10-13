#include <iostream>

#include "GradStudent.h"
#include "UndergradStudent.h"
#include "PhdStudent.h"

using std::cout;
using std::endl;

void display_grad_student_details(const GradStudent &grad_student)
{
    cout << "**************************" << endl;
    cout << "Name: " << grad_student.get_name()
         << ", has teaching assistantship: " << std::boolalpha
         << grad_student.has_teaching_assistantship()
         << ", tuition: " << grad_student.compute_tuition() << endl
         << endl;
}

int main()
{
    UndergradStudent linda{"Linda", "Computer Science"};

    GradStudent linda_grad_1{linda};
    GradStudent linda_grad_2 = linda;

    display_grad_student_details(linda);

    return 0;
}

/* OUTPUT
    **************************
    Name: Linda, has teaching assistantship: false, tuition: 90000
*/