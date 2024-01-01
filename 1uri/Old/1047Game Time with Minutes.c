include <stdio.h>
int main()
{
    int a,b,c,d,i,f,t,h,m;
    scanf("%i %i %i %i",&a,&b,&c,&d);
    a=a*60;
    c=c*60;
    i=a+b;
    f=c+d;
    t=f-i;
    if(f<=i)
    {
        t=t+(24*60);
        h=(int)t/60;
        m=t%60;
        printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n",h,m);
    }
    else
    {
        h=(int)t/60;
        m=t%60;
        printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n",h,m);
    }
    return 0;
}
