#include<stdio.h>

int main()
{
    int s, m, h;
    scanf("%d", &s);

    m = s / 60;
    s -= (m*60);
    h = m / 60;
    m -= (h*60);

    printf("%d:%d:%d\n", h, m, s);
    
    return 0;
}