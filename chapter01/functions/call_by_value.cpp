#include <iostream>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("clear");

    // function declaration.
    void change(int);

    int orig = 10;
    std::cout << "the original value is:" << orig << "\n";

    // function calling.
    change(orig);

    std::cout << "value after change() is over:" << orig << "\n";

    return 0;
}

// function definition.
void change(int orig)
{
    orig = 20; //-> the formal parameter becomes 20.
    std::cout << "value of the orig in function change() is:" << orig << "\n";

    return;
}