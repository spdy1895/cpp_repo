#include <iostream>
#include <stdio.h>
int main()
{
    system("clear");

    int terms, pre_term, next_term, temp;
    std::cout << "enter the fibonacci series number of terms required:";
    std::cin >> terms;

    pre_term = 0;
    next_term = 1;
    std::cout << "\n"
              << pre_term << "\t" << next_term;

    for (int i = 0; i < terms; i++)
    {

        temp = next_term;
        next_term += pre_term;
        pre_term = temp;
        std::cout << "\t" << next_term;
    }
    std::cout << std::endl;

    return 0;
}