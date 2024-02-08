#include <stdio.h>

int main()
{
    int d1, h1, m1, s1, r1, d2, h2, m2, s2, r2, d, h, m, s, n;

    scanf("%*s %d ", &d1);
    scanf("%d %*s ", &h1);
    scanf("%d %*s", &m1);
    scanf("%d ", &s1);
    scanf("%*s %d ", &d2);
    scanf("%d %*s", &h2);
    scanf("%d %*s", &m2);
    scanf("%d", &s2);

    r1 = s1 + (m1*60) + (h1*(60*60)) + (d1*(24*60*60));
    r2 = s2 + (m2*60) + (h2*(60*60)) + (d2*(24*60*60));

    if(r2 > r1) n = r2 - r1;
    else n = (3600-r1) + r2;

    d = n / 86400;
    n %= 86400;
    h = n / 3600;
    n %= 3600;
    m = n / 60;
    s = n % 60;

    printf("%d dia(s)\n", d);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);

    return 0;
}