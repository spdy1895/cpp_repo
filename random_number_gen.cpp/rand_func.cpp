#include <iostream>
#include <stdlib.h>
#include <stdio.h>
int main()
{
	system("clear");
	int rnum, i;
	for (i = 0; i < 5; i++)
		std::cout << (rnum = rand()) << std::endl;

	return 0;
}
