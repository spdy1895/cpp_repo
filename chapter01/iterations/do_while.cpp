#include <iostream>
#include <stdlib.h>

// printing alphabets

int main()
{
    system("clear");
    char ch = 'A';

    do
    {
        std::cout << ch << "\t";
        ch++;
    } while (ch <= 'Z');
    std::cout << "\n";

    return 0;
}