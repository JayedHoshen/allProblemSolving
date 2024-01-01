#include <stdio.h>

int main()
{
    int i, c = 0;
    float n, avg, s = 0.0;

    for (i = 1; i <= 6; i++) {
        scanf("%f", &n);

        if (n > 0.0) {
            c++;
            s += n;
        }
    }

    avg = s / c;

    printf("%d valores positivos\n", c);
    printf("%0.1f\n", avg);

    return 0;
}

