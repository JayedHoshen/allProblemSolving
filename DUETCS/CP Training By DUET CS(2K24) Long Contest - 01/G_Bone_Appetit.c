#include <stdio.h>

int main()
{
    int N, M, X, Y, total;

    scanf("%d %d", &N, &M);
    scanf("%d %d", &X, &Y);

    total = (N*X) + (M*Y);

    printf("%d\n", total);

    return 0;
}