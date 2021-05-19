#include <iostream>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("clear");
    char ch;
    float a, b, result;
    printf("enter two numbers:\n");
    scanf("%f\n %f", &a, &b);
    printf("enter the operator: (+, -, *, /)\n");
    std::cin >> ch;
    printf("\n the operator entered is: %c\n", ch);

    if (ch == '+')
        result = a + b;
    else if (ch == '-')
        result = a - b;
    else if (ch == '*')
        result = a * b;
    else if (ch == '/')
        result = a / b;
    else
        printf("wrong operator! entered.\n");

    printf("the calculated result is: %f", result);

    return 0;
}