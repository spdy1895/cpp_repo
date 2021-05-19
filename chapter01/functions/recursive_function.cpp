// function to calculate factorial of a number
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("clear");

    // function declaration
    int factorial(int); // call by reference.

    int n, fact;
    std::cout << "enter the number whose factorial is to be calculated:";
    std::cin >> n;

    // function calling
    fact = factorial(n);

    std::cout << "the result is:" << fact << std::endl;

    return 0;
}

// recursive function call.
int factorial(int i)
{
    if (i == 1)
        return 1;
    else
        return i * factorial(i - 1);
}