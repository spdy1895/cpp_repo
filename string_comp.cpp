#include <iostream>
#include <stdlib.h>
#include <stdio.h>
int main()
{
    system("clear");
    char string[10];
    std::cout << "enter the string:";
    std::cin.getline(string, 10);
    if (string == "dextrose")
        std::cout << "C6H10O6-H20" << std::endl;
    else
        std::cout << "wrong string entered." << std::endl;

    return 0;
}