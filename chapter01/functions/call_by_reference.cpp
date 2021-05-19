#include <iostream>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("clear");

    // function declaration.
    void change(int &);

    int orig = 10;
    std::cout << "the original value is:" << orig << std::endl;

    // function calling.
    change(orig);

    std::cout << "value after change() is over:" << orig << std::endl;

    return 0;
}

// function definition.
void change(int &a)
{

    a = 20; //-> the original parameter becomes 20;
    std::cout << "value of orig in function change() is:" << a << "\n";

    return;
}