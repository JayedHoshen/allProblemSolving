#include <stdio.h>

int main()
{
    int n, c = 0;
    double avg, sum = 0;

    while(1) {
        scanf("%d", &n);

        if(n < 0) break;
        else {
            sum += n;
            c++;
        }
    }
    avg = sum / c;
    printf("%0.2lf\n", avg);

    return 0;
}