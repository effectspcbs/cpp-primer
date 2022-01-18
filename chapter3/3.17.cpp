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
        for (auto &c : s)
        {
            c = toupper(c);
        }
    }

    int count = 0;

    for (decltype(vstr.size()) i = 0; i < vstr.size(); i++)
    {
        cout << vstr[i] << " ";
        count++;

        if (count == 8)
        {
            cout << endl;
            count = 0;
        }
    }

    return 0;
}