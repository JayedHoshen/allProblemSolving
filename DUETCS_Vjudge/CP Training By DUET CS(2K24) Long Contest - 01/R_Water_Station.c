#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if(n % 5 == 1) n -= 1;
    if(n % 5 == 2) n -= 2;
    if(n % 5 == 3) n += 2;
    if(n % 5 == 4) n += 1;
    printf("%d\n", n);

    return 0;
}