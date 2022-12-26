#include <forward_list>
#include <iostream>

using std::cout;
using std::endl;
using std::forward_list;
using std::string;

void print_scores(const forward_list<int> &scores)
{
    for (const int &score : scores)
    {
        cout << score << " ";
    }

    cout << endl;
}

int main()
{
    forward_list<int> scores = {22, 56, 98, 34, 12, 67, 56, 98, 78};

    cout << "-------------------Original Contents-------------------" << endl;
    print_scores(scores);

    scores.remove(12);
    scores.remove(22);

    cout << "-------------------Contents (after remove)-------------------" << endl;
    print_scores(scores);

    scores.sort();

    cout << "-------------------Contents (after sort)-------------------" << endl;
    print_scores(scores);

    scores.reverse();

    cout << "-------------------Contents (after reverse)-------------------" << endl;
    print_scores(scores);

    scores.unique();

    cout << "-------------------Contents (after unique)-------------------" << endl;
    print_scores(scores);

    return 0;
}

/*  OUTPUT
    -------------------Original Contents-------------------
    22 56 98 34 12 67 56 98 78
    -------------------Contents (after remove)-------------------
    56 98 34 67 56 98 78
    -------------------Contents (after sort)-------------------
    34 56 56 67 78 98 98
    -------------------Contents (after reverse)-------------------
    98 98 78 67 56 56 34
    -------------------Contents (after unique)-------------------
    98 78 67 56 34
*/