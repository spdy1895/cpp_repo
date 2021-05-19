#include <iostream>
int main(int argc, char **argv)
{

    int choice;
    std::cout << "monday is 1 and sunday is 7." << std::endl;
    std::cout << "enter the week day number:" << std::endl;
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        std::cout << "Monday!" << std::endl;
        break;

    case 2:
    std:;
        std::cout << "Tuesday!" << std::endl;
        break;

    case 3:
        std::cout << "Wednesday!" << std::endl;
        break;

    case 4:
        std::cout << "Thursday!" << std::endl;
        break;

    case 5:
        std::cout << "Friday!" << std::endl;
        break;

    case 6:
        std::cout << "Saturday!" << std::endl;
        break;

    case 7:
        std::cout << "Sunday!" << std::endl;
        break;

    default:
        std::cout << "wrong value entered!" << std::endl;
        break;
    }

    return 0;
}