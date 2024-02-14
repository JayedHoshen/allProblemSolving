#include <stdio.h>

int main()
{
    char ch;
    int tc, n, ss = 0, sc = 0, sr = 0;
    float pc, pr, ps;

    scanf("%d", &tc);

    while(tc--) {
        scanf("%d %c", &n, &ch);
        if(ch == 'C') sc += n;
        else if(ch == 'S') ss += n;
        else if(ch == 'R') sr += n;
    }
    printf("Total: %d cobaias\n", (sc+ss+sr));
    printf("Total de coelhos: %d\n", sc);
    printf("Total de ratos: %d\n", sr);
    printf("Total de sapos: %d\n", ss);

    pc = ((float)sc / (sc+ss+sr)) * 100.0;
    printf("Percentual de coelhos: %0.2f %%\n", pc);

    pr = ((float)sr / (sc+ss+sr)) * 100.0;
    printf("Percentual de ratos: %0.2f %%\n", pr);

    ps = ((float)ss / (sc+ss+sr)) * 100.0;
    printf("Percentual de sapos: %0.2f %%\n", ps);

    return 0;
}

