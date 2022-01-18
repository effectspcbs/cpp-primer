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