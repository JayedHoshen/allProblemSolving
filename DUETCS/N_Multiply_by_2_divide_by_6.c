#include <stdio.h>

int main()
{
    int n, t, i, c = 0;

    scanf("%d", &t);
    
    for (i = 1; i <= t; i++) {
        scanf("%d", &n);
        if (n%2 == 0 || n%6 == 0) {
            printf("%d\n", n);
        } 
        else printf("-1\n");
    }
    
    return 0;
}
