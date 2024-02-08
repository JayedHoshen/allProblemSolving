#include<stdio.h>

int main()
{
    int x,y;
    double r;
    scanf("%d %d", &x, &y);
    r = (y/12.0)*x;
    printf("%.3lf\n", r);
    return 0;
}