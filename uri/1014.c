#include <stdio.h>

int main()
{
    int X;
    double Y, total_fuel;

    scanf("%d %lf", &X, &Y);

    total_fuel = X / Y;

    printf("%0.3lf km/l\n", total_fuel);

    return 0;
}
