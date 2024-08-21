#include <stdio.h>
#include <math.h>

int main()
{
    double r, pi, po;

    scanf("%lf", &r);

    pi = acos(-1.);
    po = 2 * pi * r;

    printf("pori = %lf\n", po);

    return 0;
}