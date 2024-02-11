#include<stdio.h>

int main()
{
    int h1, h2, m1, m2, r1, r2, m, h;
    
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    
    r1 = h1 * 60 + m1;
    r2 = h2 * 60 + m2;
    
    if (r2>r1) {
       m = r2-r1;
       h = m / 60;
       m -= (h*60);
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    }
    else {
       m = (1440-r1) + r2;
       h = m / 60;
       m -= (h*60);
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    }
    
    return 0;
}