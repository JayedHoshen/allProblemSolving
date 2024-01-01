#include <stdio.h>

int main()
{
    long int n, i;

    scanf("%ld", &n);

    for (i = 2; i <= n; i++) {
        if (i%2 == 0) {
            printf("%ld^2 = %ld\n", i, i*i);
        }
    }

    return 0;
}
