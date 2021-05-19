#include <iostream>
#include <stdlib.h>
#include <string.h>
int main()
{
    system("clear");
    char string1[50], string2[50];
    std::cout << "enter the string1:";
    std::cin.getline(string1, 50);
    std::cout << "enter the string2:";
    std::cin.getline(string2, 50);
    if (strlen(string1) == strlen(string2))
        std::cout << "\n both the string contains equal no of alphabets.\n";
    else
        std::cout << "\n both the string contains different no of alphabets.\n";

    //= this write function is not working.
    //std::cout.write(string1, 50);
    //std::cout.write(string2, 50);

    return 0;
}