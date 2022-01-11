#include <iostream>

int main()
{
    std::cout << "Input v1 : " << std::endl;
    int v1 = 0;
    std::cin >> v1;

    std::cout << "Inpyt v2 : " << std::endl;
    int v2 = 0;
    std::cin >> v2;

    std::cout << "The product of " << v1 << " and " << v2 << " is : " << v1*v2 << std::endl;
}