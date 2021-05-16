#include <iostream>
#include <stdlib.h>
#include <string.h>
int main()
{
    system("clear");

    float marks[5];
    char statement[50];

    for (int i = 0; i < 5; i++)
    {
        std::cout << "enter the marks of student:" << i + 1 << std::endl;
        std::cin >> marks[i];
    }

    std::cout << "\n";
    for (int i = 0; i < 5; i++)
    {
        std::cout << "marks[" << i << "]" << marks[i] << "\n";
    }

    std::cout << "\nenter your comment!" << std::endl;
    std::cin.ignore();
    std::cin.getline(statement, 50);
    std::cout << "\nyou entered:" << statement << std::endl;
    std::cout << __cplusplus << std::endl;
    return 0;
}
