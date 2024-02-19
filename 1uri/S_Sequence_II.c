#include <stdio.h>
#include <math.h>

int main()
{
    double i, j, sum = 0.0;

    for(i = 1, j = 0; i <= 40; i+=2, j++) sum += (i/pow(2,j));
    printf("%.2lf\n", sum);

    return 0;
}