#include <stdio.h>

int main()
{
    int n, r;
    
    scanf("%d", &n);
    printf("%d\n", n);

    r = n / 100;
    n = n - (100*r);
    printf("%d nota(s) de R$ 100,00\n", r);

    r = n / 50;
    n = n - (50*r);
    printf("%d nota(s) de R$ 50,00\n", r);

    r = n / 20;
    n = n - (20*r);
    printf("%d nota(s) de R$ 20,00\n", r);

    r = n / 10;
    n = n - (10*r);
    printf("%d nota(s) de R$ 10,00\n", r);

    r = n / 5;
    n = n - (5*r);
    printf("%d nota(s) de R$ 5,00\n", r);

    r = n / 2;
    n = n - (2*r);
    printf("%d nota(s) de R$ 2,00\n", r);

    r = n / 1;
    n = n - (1*r);
    printf("%d nota(s) de R$ 1,00\n", r);

    return 0;
}