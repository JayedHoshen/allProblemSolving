#include <stdio.h>

int main()
{
    double R, circle;

    scanf("%lf", &R);

    circle = 3.14159 * R * R;

    printf("A=%.4lf\n", circle);

    return 0;
}
