#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vint;
    int n = 0;

    while (cin >> n)
    {
        vint.push_back(n);
    }

    for (decltype(vint.size()) i = 0; i < vint.size(); i += 2)
    {
        cout << vint[i] << " + " << vint[i+1] << " = " << vint[i] + vint[i+1] << endl;
    }

    for (decltype(vint.size()) i = 0; i < vint.size() / 2; i++)
    {
        cout << vint[i] << " + " << vint[vint.size()-1-i] << " = " << vint[i] + vint[vint.size()-1-i] << endl;
    }

    return 0;
}