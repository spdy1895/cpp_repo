#include <iostream>
int main(int argc, char **argv)
{

    int choice;
    float temp, countemp;
    std::cout << "temperature conversion menu" << std::endl;
    std::cout << "1. Fahrenheit to Celcius" << std::endl;
    std::cout << "2. Celcius to Fahrenheit" << std::endl;
    std::cout << "enter your choice:" << std::endl;
    std::cin >> choice;

    if (choice == 1)
    {
        std::cout << "\n"
                  << "enter temperature in Fahrenheit:" << std::endl;
        std::cin >> temp;
        countemp = (temp - 32) / 1.8;
        std::cout << "the temperature in Celcius is:" << countemp << std::endl;
    }

    else
    {
        std::cout << "\n"
                  << "enter the temperature in Celcius:" << std::endl;
        std::cin >> temp;
        countemp = (temp * 1.8) + 32;
        std::cout << "the temperature in Fahrenheit is:" << countemp << std::endl;
    }

    return 0;
}