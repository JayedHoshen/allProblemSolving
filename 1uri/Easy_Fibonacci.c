#include <stdio.h>

int main()
{
    int fib[46], n, i;

    scanf("%d", &n);

    fib[0] = 0;
    fib[1] = 1;
    printf("%d %d ", fib[0], fib[1]);
    for(i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
        if(i == (n-1)) printf("%d", fib[i]);
        else printf("%d ", fib[i]);
    }
    printf("\n");

    return 0;
}