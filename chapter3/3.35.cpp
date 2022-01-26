#include <iostream>
#include <array>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::array;
using std::vector;

int main()
{
    constexpr size_t iaSize = 10;
    int ia[iaSize];
    int *p = ia;

    for (size_t i = 0; i < iaSize; i++)
    {
        *(p + i) = i;
    }
    for (size_t i = 0; i < iaSize; i++)
    {
        cout << "ia element " << i << " = " << ia[i] << endl;
    }

    return 0;
}