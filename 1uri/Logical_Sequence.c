#include <stdio.h>
#include <math.h>

int main()
{
    double i, n;
    scanf("%lf", &n);

    for(i = 1; i <= n; i++) {
        printf("%.0lf %.0lf %.0lf\n", i, pow(i,2), pow(i,3));
        printf("%.0lf %.0lf %.0lf\n", i, (pow(i,2)+1), (pow(i,3)+1));
    }

    return 0;
}