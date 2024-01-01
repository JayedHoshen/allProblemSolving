#include <stdio.h>

int main()
{
    int n, c = 0;
    float s = 0, avg;

    while (1) {
        scanf("%d", &n);

        if (n < 0) break;

        c++;
        s += n;
    }

    avg = s / c;

    printf("%0.2f\n", avg);

    return 0;
}
