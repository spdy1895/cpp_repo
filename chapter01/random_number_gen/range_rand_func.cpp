#include <iostream>
#include <stdlib.h>
#include <stdio.h>
int main()
{
    system("clear");
    int i, randnum;
    unsigned int seedval;
    std::cout << "enter the seed value:";
    std::cin >> seedval;
    srand(seedval);
    for (i = 0; i < 5; i++)
    {
        std::cout << ((rand() % 50) + 15) << std::endl;
    }

    return 0;
}