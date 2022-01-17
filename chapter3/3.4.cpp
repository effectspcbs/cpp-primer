#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s1;
    cout << "Input 1 : " << endl;
    cin >> s1;

    string s2;
    cout << "Input 2 : " << endl;
    cin >> s2;

    if (s1 == s2)
    {
        cout << "String " << s1 << " equal " << s2 << endl;
    }
    else
    {
        if (s1 > s2)
        {
            cout << "String " << s1 << " bigger than " << s2 << endl;
        }
        else
        {
            cout << "String " << s2 << " bigger than " << s1 << endl;
        }

        if (s1.length() > s2.length())
        {
            cout << "String " << s1 << " longer than " << s2 << endl;
        }
        else{
            cout << "String " << s2 << " longer than " << s1 << endl;
        }
    }

    return 0;
}