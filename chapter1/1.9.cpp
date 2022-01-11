#include <iostream>

int main()
{
    int sum = 0;
    int val = 50;

    while (val <= 100)
    {
        sum += val;
        val++;
    }

    std::cout << "The sum inclusive of 50 to 100 is : " << sum << std::endl;
}