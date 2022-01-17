#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string stotal;
    string s;

    while (cin >> s)
    {
        stotal += s;
        stotal += " ";
    }

    cout << stotal << endl;

    return 0;
}