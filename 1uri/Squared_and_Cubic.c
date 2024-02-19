#include <stdio.h>
#include <math.h>

int main()
{
    double i, j, n;
    scanf("%lf", &n);

    for(i = 1; i <= n; i++) {
        printf("%.0lf %.0lf %.0lf\n", pow(i,1), pow(i,2), pow(i,3));
    }

    return 0;
}