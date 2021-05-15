#include <iostream>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("clear");
    char ch;
    do
    {
        std::cout << "enter a character:";
        ch = getchar();
        if (ch == '\n')
            ch = getchar();
        std::cout << std::endl;
        if (ch >= 65 && ch <= 90)
            ch += 32;
        else if (ch >= 97 && ch <= 122)
            ch -= 32;
        putchar(ch);
        std::cout << std::endl;
    } while (ch != '0');

    return 0;
}