#include <iostream>

#include "GradStudent.h"
#include "UndergradStudent.h"
#include "PhdStudent.h"

using std::cout;
using std::endl;

void display_grad_student_details(const Student *student)
{
    const UndergradStudent *undergrad_student = dynamic_cast<const UndergradStudent *>(student);

    if (undergrad_student != nullptr)
    {
        cout << "************** Undergrad Student **************" << endl;
        cout << "Name: " << undergrad_student->get_name()
             << ", major: " << undergrad_student->get_major()
             << ", tuition: " << undergrad_student->compute_tuition() << endl << endl;
    }

    const GradStudent *grad_student = dynamic_cast<const GradStudent *>(student);

    if (grad_student != nullptr)
    {
        cout << "************** Grad Student **************" << endl;
        cout << "Name: " << grad_student->get_name()
             << ", has teaching assistantship: " << std::boolalpha
             << grad_student->has_teaching_assistantship()
             << ", tuition: " << grad_student->compute_tuition() << endl << endl;
    }

    const PhdStudent *phd_student = dynamic_cast<const PhdStudent *>(student);

    if (phd_student != nullptr)
    {
        cout << "************** Phd Student **************" << endl;
        cout << "Name: " << phd_student->get_name()
             << ", has teaching assistantship: " << std::boolalpha
             << phd_student->has_teaching_assistantship()
             << ", has research assistantship: " << std::boolalpha
             << phd_student->has_research_assistantship()
             << ", tuition: " << phd_student->compute_tuition() << endl << endl;
    }
}

int main()
{
    UndergradStudent bob{"Bob", "History"};
    GradStudent linda{"Linda", true};
    PhdStudent terry{"Terry", false, true};

    display_grad_student_details(&bob);
    display_grad_student_details(&linda);
    display_grad_student_details(&terry);

    return 0;
}

/* OUTPUT
    ************** Undergrad Student **************
    Name: Bob, major: History, tuition: 240000

    ************** Grad Student **************
    Name: Linda, has teaching assistantship: true, tuition: 18000

    ************** Grad Student **************
    Name: Terry, has teaching assistantship: false, tuition: 10500

    ************** Grad Student **************
    Name: Terry, has teaching assistantship: false, has research assistantship: true, tuition: 10500
*/