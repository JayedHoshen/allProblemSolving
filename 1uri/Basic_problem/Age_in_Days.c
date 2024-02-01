#include <stdio.h>

int main()
{
    int n, r;
    scanf("%d", &n);

    r = n / 365;
    n -= (r*365);
    printf("%d ano(s)\n", r);
    r = n / 30;
    n -= (r*30);    
    printf("%d mes(es)\n", r);
    printf("%d dia(s)\n", n);

    return 0;
}