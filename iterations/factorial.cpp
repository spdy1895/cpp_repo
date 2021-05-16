#include <iostream>
#include <stdio.h>

// factorial of a number using while loop.

int main()
{
    system("clear");
    long double i, num, fact = 1;
    std::cout << "\n enter integer:";
    std::cin >> num;
    std::cout << "\n the factorial of number:" << num << "! \tis:";
    while (num)
    {
        fact *= num;
        --num;
    }
    std::cout << fact << "\n";

    return 0;
}