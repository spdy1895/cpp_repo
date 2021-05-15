#include <iostream>
#include <cstdio>
#include <cstring>
int main()
{
    system("clear");
    char astr[51];
    int length;
    std::cout << "\n enter a string of maximum 50 characters!\n";
    std::cin >> astr;
    length = strlen(astr);
    std::cout << "\n"
              << astr;
    std::cout << "the length of the string is:" << length << "\n";

    return 0;
}