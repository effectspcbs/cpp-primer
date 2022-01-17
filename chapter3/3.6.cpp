#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main ()
{
    string s;
    cout << "Input : " << endl;
    cin >> s;

    string t1 = s;
    for (auto &c : t1)
    {
        c = 'X';
    }
    cout << t1 << endl;

    string t2 = s;
    int i1 = 0;
    while (i1 < t2.length())
    {
        t2[i1] = 'X';
        i1++;
    }
    cout << t2 << endl;

    string t3 = s;
    for (int i2 = 0; i2 < t3.length(); i2++)
    {
        t3[i2] = 'X';
    }
    cout << t3 << endl;
}