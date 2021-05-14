#include <iostream>
#include <stdlib.h>
#include <math.h>
int main(int argc, char **argv)
{
    system("clear");
    int S, P, a, b, c;
    printf("enter the sum of two numbers:");
    scanf("%d", &S);
    printf("enter the product of two numbers:");
    scanf("%d", &P);

    if (S > 0)
        printf("quadratic equation formed is: x*x - %dx + %d\n", S, P);
    else
        printf("quadratic equation formed is: x*x + %dx + %d\n", S, P);

    a = 1;
    b = -S;
    c = P;

    printf("coefficients are : a= %d, d= %d, c= %d\n", a, b, c);
    double discriminant = (b * b) - (4.0 * a * c);
    printf("%lf\n", discriminant);
    double sqroot = sqrt(discriminant);
    printf("%lf\n", sqroot);
    double root1 = (-b + sqroot) / (2.0 * a);
    double root2 = (-b - sqroot) / (2.0 * a);
    printf("two numbers whose sum is %d and product is %d\n", S, P);
    printf("root1: %lf\n", root1);
    printf("root2: %lf\n", root2);

    return 0;
}