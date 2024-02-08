#include <stdio.h>

int main()
{
    float i, n, c = 0, sum = 0, avg;

    for(i = 1; i <= 6; i++) {
        scanf("%f", &n);

        if(n > 0) {
            c++;
            sum += n;
        } 
    }
    printf("%0.0f valores positivos\n", c);
    avg = sum / c;
    printf("%0.1f\n", avg);

    return 0;
}