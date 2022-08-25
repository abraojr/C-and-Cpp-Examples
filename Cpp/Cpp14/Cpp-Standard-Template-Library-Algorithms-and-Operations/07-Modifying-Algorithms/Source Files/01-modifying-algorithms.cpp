#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::random_shuffle;
using std::srand;
using std::time;
using std::vector;

/*
1. transform

2. copy, copy_if, copy_n, copy_backward, move, move_backward

3. unique, unique_copy

4. remove, replace

5. reverse, rotate, random_shuffle, partition, stable_partition

6. next_permutation, prev_permutation, is_permutation

7. fill, generate

8. swap, iter_swap

*/

int main()
{
    srand(unsigned(time(nullptr)));

    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    random_shuffle(v.begin(), v.end());

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}

/* OUTPUT
    2 1 8 7 4 5 0 3 6 9
*/