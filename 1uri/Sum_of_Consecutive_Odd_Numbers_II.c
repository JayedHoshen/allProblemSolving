#include <stdio.h>

int main()
{
    int tc, i, a, b, s;

    scanf("%d", &tc);

    while(tc--) {
        scanf("%d %d", &a, &b);
        s = 0;
        int min = a<b?a:b;
        int max = a>b?a:b;
        for(i = min+1; i < max; i++) if(i%2) s += i;
        printf("%d\n", s);
    }

    return 0;
}