#include <iostream>

using std::cout;

int main()
{
    // while(expression-condition) { ... }
    // one-line while loop
    cout << "One-line while loop: ";
    int i = 20;
    while (i >= 10)
        cout << i-- << " ";

    // compound statement
    cout << "\n\nCompound statement: ";
    while (i >= 0)
    {
        cout << i << " ";
        i--;
    }

    // declarative condition (assignment)
    cout << "\n\nDeclarative condition (assignment): ";
    int a[] = {5, 10, 6, 4, 4, 2, 1, 1, 20, 0};
    int j = 0;
    while (int i = a[j++])
    {
        cout << i << " ";
    }

    // Using continue
    cout << "\n\nUsing continue: ";
    i = 0;
    while (i < 10)
    {
        i++;
        if (i % 2 == 0)
            continue;
        cout << i << " ";
    }

    // breaking
    cout << "\n\nBreaking: ";
    i = 1;
    while (i < 10)
    {
        if (i % 7 == 0)
            break;
        cout << i << " ";
        i++;
    }
    cout << "\n\n";

    return 0;
}

/* OUTPUT
    One-line while loop: 20 19 18 17 16 15 14 13 12 11 10 

    Compound statement: 9 8 7 6 5 4 3 2 1 0 

    Declarative condition (assignment): 5 10 6 4 4 2 1 1 20 

    Using continue: 1 3 5 7 9 
    
    Breaking: 1 2 3 4 5 6 
*/