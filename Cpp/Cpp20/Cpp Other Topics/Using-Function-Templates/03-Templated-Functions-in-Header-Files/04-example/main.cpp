#include <iostream>
#include <string>
#include <vector>

#include "function_templates.h"

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    string heidi{"Heidi"};
    string carlos{"Carlos"};
    string erica{"Erica"};

    vector<string> names = create_vector(heidi, carlos, erica);
    print_elements(names);

    vector<int> scores = create_vector(76, 89, 95);
    print_elements(scores);

    return 0;
}

/* OUTPUT
    **********************
    Heidi
    **********************
    **********************
    Carlos
    **********************
    **********************
    Erica
    **********************
    **********************
    76
    **********************
    **********************
    89
    **********************
    **********************
    95
    **********************
*/