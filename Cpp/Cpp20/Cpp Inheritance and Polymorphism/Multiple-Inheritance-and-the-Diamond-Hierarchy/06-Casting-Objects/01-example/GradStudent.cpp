#include <string>

#include "GradStudent.h"
#include "UndergradStudent.h"

using std::string;

GradStudent::GradStudent(string name, bool teaching_assistantship) : Student(name), teaching_assistantship(teaching_assistantship) {}

GradStudent::GradStudent(const UndergradStudent &undergrad_student) : Student(undergrad_student.get_name()), teaching_assistantship(false) {}

bool GradStudent::has_teaching_assistantship() const
{
    return teaching_assistantship;
}

float GradStudent::compute_tuition() const
{
    float tuition = 45000 * 2;
    if (teaching_assistantship)
    {
        tuition = tuition * 0.2;
    }
    return tuition;
}
