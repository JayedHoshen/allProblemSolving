#include <stdio.h>

int main()
{
    int x, y, n, result;

    scanf("%d %d %d", &x, &y, &n);

    if(y < x * 3) result = (n / 3) * y + (n % 3) * x;
    else result = n * x;
    printf("%d\n", result);

    return 0;
}