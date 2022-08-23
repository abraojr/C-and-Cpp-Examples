#include <iostream>
#include <array>

using std::array;
using std::cout;

int main()
{
    // 1. creating array
    array<int, 5> a = {1, 2, 3, 4, 5};

    // 2. accessing elements
    cout << "size: " << a.size() << "\n";
    cout << "front: " << a.front() << "\n";
    cout << "a[1]: " << a[1] << "\n";
    cout << "back: " << a.back() << "\n";

    // 3. iterate
    for (auto itr = a.begin(); itr != a.end(); ++itr)
    {
        cout << *itr << " ";
    }
    cout << "\n";

    // 4. fill
    a.fill(2);

    // 5. pointer arithmetic
    int *i = a.data();
    *(i + 2) = 3;
    cout << "i[3]: " << i[3] << "\n";

    return 0;
}

/* OUTPUT
    size: 5
    front: 1
    a[1]: 2
    back: 5
    1 2 3 4 5
    i[3]: 2
*/