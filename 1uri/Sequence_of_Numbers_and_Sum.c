#include <stdio.h>

int main()
{
    int i, a, b, s;

    while(1) {
        scanf("%d %d", &a, &b);
        if(a <= 0 || b <= 0) break;
        
        s = 0;
        int min = a<b?a:b;
        int max = a>b?a:b;
        for(i = min; i <= max; i++) {
            printf("%d ", i);
            s += i;
        } 
        printf("Sum=%d\n", s);
    }

    return 0;
}