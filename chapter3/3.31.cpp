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
    for (size_t i = 0; i < iaSize; i++)
    {
        ia[i] = i;
    }
    for (size_t i = 0; i < iaSize; i++)
    {
        cout << "ia element " << i << " = " << ia[i] << endl;
    }

    int ia2[iaSize];
    for (size_t i = 0; i < iaSize; i++)
    {
        ia2[i] = ia[i];
    }
    for (size_t i = 0; i < iaSize; i++)
    {
        cout << "ia2 element " << i << " = " << ia2[i] << endl;
    }

    vector<int> vint;
    for (size_t i = 0; i < iaSize; i++)
    {
        vint.push_back(i);
    }
    for (auto &i : vint)
    {
        cout << "vint element " << i << " = " << i << endl;
    }

    vector<int> vint2 = vint;
    for (auto &i : vint2)
    {
        cout << "vint2 element " << i << " = " << i << endl;
    }

    return 0;
}