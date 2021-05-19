#include <iostream>
#include <stdlib.h>
int main(int argc, char **argv)
{
    system("clear");
    double radius, area, perimeter;
    printf("enter the radius of the circle:\n");
    scanf("%lf", &radius);
    perimeter = 2 * 3.14159 * radius;
    area = 3.14159 * radius * radius;

    printf("the perimeter is:%f\n", perimeter);
    printf("the area is: %f\n", area);

    return 0;
}