#include <stdio.h>

int main()
{
    int n, i;
    double a, b, c, avg;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%lf %lf %lf", &a, &b, &c);
        a *= 2;
        b *= 3;
        c *= 5;
        avg = (a+b+c) / (2+3+5);
        printf("%0.1lf\n", avg);
    }

    return 0;
}
