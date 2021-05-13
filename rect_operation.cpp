// program to display a menu rectangle operations and perform according to users response.
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{

    char ch, ch1;
    float length, breadth, perimeter, area, diagonal;
    do
    {
        std::cout << "\n rectangle menu!";
        std::cout << "\n 1. area";
        std::cout << "\n 2. perimeter";
        std::cout << "\n 3. diagonal";
        std::cout << "\n 4. exit";
        std::cout << "\n enter your choice:";
        std::cin >> ch;
        if (ch == '1' || ch == '2' || ch == '3')
        {
            std::cout << "\n enter the length and breadth:";
            std::cin >> length;
            std::cin >> breadth;
        }

        switch (ch)
        {
        case '1':
            area = length * breadth;
            std::cout << "\n area:" << area << std::endl;
            break;

        case '2':
            perimeter = 2 * (length + breadth);
            std::cout << "\n perimeter:" << perimeter << std::endl;
            break;

        case '3':
            diagonal = sqrt(length * length + breadth * breadth);
            std::cout << "\n diagonal:" << diagonal << std::endl;
            break;

        case '4':
            break;

        default:
            std::cout << "wrong choice entered!" << std::endl;
            break;
        }
        std::cout << "\n press any key to continue...\n";
        ch1 = getchar();

    } while (ch >= '1' && ch <= '3');

    return 0;
}