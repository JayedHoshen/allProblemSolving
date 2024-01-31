#include <stdio.h>

int main()
{
    int x;
    double y, result;

    scanf("%d %lf", &x, &y);

    result = x / y;
    printf("%.3lf km/l\n", result);

    return 0;
}