#include <iostream>
#include <stdlib.h>
int main()
{
    system("clear");
    int chcount = 0;
    char ch;
    std::cout << "enter a character:";
    std::cin.get(ch);
    while (ch != '\n')
    {
        chcount++;
        std::cout.put(ch);
        std::cin.get(ch);
    }
    std::cout << "\n the number of characters= " << chcount << std::endl;

    return 0;
}