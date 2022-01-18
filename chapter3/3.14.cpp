#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    vector<int> vint;
    int n = 0;

    while (cin >> n)
    {
        vint.push_back(n);
    }

    for (auto n : vint)
    {
        cout << n << endl;
    }

    vector<string> vstr;
    string s;

    while (cin >> s)
    {
        vstr.push_back(s);
    }

    for (auto &s : vstr)
    {
        cout << s <<endl;
    }

    return 0;
}
