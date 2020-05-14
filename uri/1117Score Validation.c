#include <stdio.h>

int main()
{
    int count = 0;
    double n, avg, sum = 0.0;

    while(1) {
        if (count == 2) break;
        scanf("%lf", &n);

        if (n >= 0 && n <= 10) {
            sum += n;
            count ++;
        }
        else {
            printf("nota invalida\n");
        }
    }
    avg = sum / count;

    printf("media = %.2lf\n", avg);

    return 0;
}
