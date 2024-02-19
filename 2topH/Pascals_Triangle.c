#include <stdio.h>
#include <math.h>

int main()
{
    int n; double r;
    
    scanf("%d", &n);

    r = pow(2, n-1);
    printf("%.0lf\n", r);

    return 0;
}