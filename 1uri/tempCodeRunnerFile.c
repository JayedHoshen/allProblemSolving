#include <stdio.h>

int main()
{
    int tc, i, a, b, s;

    scanf("%d", &tc);

    while(tc--) {
        scanf("%d %d", &a, &b);
        s = 0;
        for(i = a+1; i < b; i++) if(i%2) s += i;
        printf("%d\n", s);
    }

    return 0;
}