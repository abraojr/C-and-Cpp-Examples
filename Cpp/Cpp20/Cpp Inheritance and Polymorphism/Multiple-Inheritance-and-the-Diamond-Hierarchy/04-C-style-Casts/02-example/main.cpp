#include <iostream>

#include "GradStudent.h"
#include "UndergradStudent.h"
#include "PhdStudent.h"

using std::cout;
using std::endl;

void display_grad_student_details(const Student *student)
{
    const GradStudent *grad_student = (GradStudent *)student;

    cout << "**************************" << endl;
    cout << "Name: " << grad_student->get_name()
         << ", has teaching assistantship: " << std::boolalpha
         << grad_student->has_teaching_assistantship()
         << ", tuition: " << grad_student->compute_tuition() << endl
         << endl;
}

int main()
{
    GradStudent linda{"Linda", true};
    PhdStudent terry{"Terry", false, true};
    UndergradStudent bob{"Bob", "History"};

    display_grad_student_details(&linda);
    display_grad_student_details(&terry);
    display_grad_student_details(&bob);

    return 0;
}

/* OUTPUT
    **************************
    Name: Linda, has teaching assistantship: true, tuition: 18000

    **************************
    Name: Terry, has teaching assistantship: false, tuition: 10500

    **************************
    Name: Bob, has teaching assistantship: true, tuition: 240000
*/