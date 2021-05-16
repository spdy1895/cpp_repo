#include <iostream>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("clear");
    int sales[3][6];
    int i, j, total;
    for (i = 0; i < 3; i++)
    {
        total = 0;
        std::cout << "enter sales for salesman:" << i + 1 << std::endl;
        for (j = 0; j < 6; j++)
        {
            std::cout << "\n month" << j + 1 << ":";
            std::cin >> sales[i][j];
            total = total + sales[i][j];
        }
        std::cout << "\n total sales of the salesperson" << i + 1 << "=" << total << "\n";
    }

    return 0;
}