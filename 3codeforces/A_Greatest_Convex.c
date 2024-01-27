#include <stdio.h>

int main()
{
    int i, k, x;

    scanf("%d", &k);

    for (i = 1; i <= k; i++) {
        scanf("%d", &x);
        printf("%d\n", x-1);        
    }

    return 0;
}