#include <stdio.h>

int main()
{
    long long int fib[61], tc, n, j;

    scanf("%lld", &tc);
    fib[0] = 0;
    fib[1] = 1;
    for(j = 2; j <= 60; j++) fib[j] = fib[j-2] + fib[j-1];

    while(tc--) {
        scanf("%lld", &n);
        printf("Fib(%lld) = %lld\n", n, fib[n]);
    }

    return 0;
}