#include <iostream>
#include <stdlib.h>
#include <stdio.h>
int main()
{
    system("clear");

    // function declaration.
    float large(float arr[], int n);

    char ch;
    int i;
    float amount[50], biggest;
    for (i = 0; i < 50; i++)
    {
        std::cout << "enter element no:" << i << "\n";
        std::cin >> amount[i];
        std::cout << "more elements? (y/n)\n";
        std::cin >> ch;
        if (ch != 'y')
            break;
    }

    if (i < 50)
        ++i;

    // function calling.
    biggest = large(amount, i);

    std::cout << "the largest element of the array is:" << biggest << "\n";

    return 0;
}

// function definition.
float large(float arr[], int n)
{
    float max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}
