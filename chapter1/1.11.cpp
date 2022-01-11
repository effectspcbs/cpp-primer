#include <iostream>

int main()
{
    std::cout << "Input v1 : " << std::endl;
    int v1 = 0;
    std::cin >> v1;

    std::cout << "Input v2 : " << std::endl;
    int v2  = 0;
    std::cin >> v2;

    if (v1 > v2)
    {
        int val = v1;
        while (val >= v2)
        {
            std::cout << "v1 : " << val << std::endl;
            val--;
        }
    }
    else
    {
        int val = v1;
        while (val <= v2)
        {
            std::cout << "v1 : " << val << std::endl;
            val++;
        }
    }
}