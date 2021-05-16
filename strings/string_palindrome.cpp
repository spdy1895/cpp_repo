#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
    system("clear");
    int len;
    char string[80], c;
    std::cout << "\nenter a string:";
    //std::cin.ignore(); //-> use this only if there is some prior input.
    std::cin.getline(string, 80);

    int str_len = strlen(string);
    std::cout << "\nactual length:" << str_len;
    // loop to find the length of the string.
    for (len = 0; string[len] != '\0'; ++len)
        ;
    std::cout << "\nstring length is:" << len;

    int i, j, flag = 1;
    // loop to find the palindrome nature.
    for (i = 0, j = len - 1; i < len / 2; i++, j--)
    {
        if (string[i] != string[j])
        {
            flag = 0;
            break;
        }
    } // loop over;

    if (flag)
        std::cout << "\nit is palindrome\n";
    else
        std::cout << "\nit is not a palindrome\n";

    return 0;
}