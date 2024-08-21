#include <stdio.h>
#include <math.h>

int main()
{
    double r, x1, x2, y1, y2;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    r = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

    printf("r = %lf\n", r);

    return 0;
}