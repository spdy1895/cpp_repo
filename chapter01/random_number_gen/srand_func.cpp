#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h> // to obtain system time through time_t
int main()
{
    system("clear");
    int i, randum;
    unsigned int seedval;
    //time_t t; // t is time type variale now
    //seedval = (unsigned)time(&t);
    // time(&t) function will initialize time variable t with system time
    std::cout << "enter a seed value:";
    std::cin >> seedval;
    srand(seedval); // seed the random no. generator
    for (i = 0; i < 5; i++)
    {
        std::cout << rand() << std::endl;
    }

    return 0;
}