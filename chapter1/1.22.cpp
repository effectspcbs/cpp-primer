#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total;

    if (std::cin >> total)
    {
        Sales_item book;

        while (std::cin >> book)
        {
            if (total.isbn() == book.isbn())
            {
                total += book;
            }
        }
    }

    std::cout << total << std::endl;
}