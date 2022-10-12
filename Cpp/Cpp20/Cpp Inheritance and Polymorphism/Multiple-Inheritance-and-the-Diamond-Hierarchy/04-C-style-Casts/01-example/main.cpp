#include <iostream>

#include "GradStudent.h"
#include "UndergradStudent.h"
#include "PhdStudent.h"

using std::cout;
using std::endl;

void display_grad_student_details(const Student &student)
{
    const GradStudent &grad_student = (GradStudent &)student;

    cout << "**************************" << endl;
    cout << "Name: " << grad_student.get_name()
         << ", has teaching assistantship: " << std::boolalpha
         << grad_student.has_teaching_assistantship()
         << ", tuition: " << grad_student.compute_tuition() << endl << endl;
}

int main()
{
    GradStudent linda{"Linda", true};
    GradStudent terry{"Terry", false};

    cout << "----- GradStudent -----" << endl;
    display_grad_student_details(linda);
    display_grad_student_details(terry);

    PhdStudent janice{"Janice", false, true};
    PhdStudent joe{"Joe", true, false};

    cout << "----- PhdStudent -----" << endl;
    display_grad_student_details(janice);
    display_grad_student_details(joe);

    UndergradStudent joana{"Joana", "Computer Science"};
    UndergradStudent bob{"Bob", "Math"};

    cout << "----- UndergradStudent -----" << endl;
    display_grad_student_details(joana);
    display_grad_student_details(bob);

    return 0;
}

/* OUTPUT
    ----- GradStudent -----
    **************************
    Name: Linda, has teaching assistantship: true, tuition: 18000

    **************************
    Name: Terry, has teaching assistantship: false, tuition: 90000

    ----- PhdStudent -----
    **************************
    Name: Janice, has teaching assistantship: false, tuition: 10500

    **************************
    Name: Joe, has teaching assistantship: true, tuition: 147000

    ----- UndergradStudent -----
    **************************
    Name: Joana, has teaching assistantship: true, tuition: 240000

    **************************
    Name: Bob, has teaching assistantship: true, tuition: 240000
*/