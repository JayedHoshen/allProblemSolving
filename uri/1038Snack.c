#include <stdio.h>

int main()
{
    int X, Y;
    double result;

    scanf("%d %d", &X, &Y);

    if (X == 1) result = (4.00 * Y);
    if (X == 2) result = (4.50 * Y);
    if (X == 3) result = (5.00 * Y);
    if (X == 4) result = (2.00 * Y);
    if (X == 5) result = (1.50 * Y);

    printf("Total: R$ %0.2lf\n", result);

    return 0;
}
