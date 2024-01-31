#include <stdio.h>

int main()
{
    double R, result, pi = 3.14159;
    scanf("%lf", &R);

    result = (4.0/3) * pi * (R*R*R);

    printf("VOLUME = %.3lf\n", result);

    return 0;
}