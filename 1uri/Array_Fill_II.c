#include <stdio.h>

int main()
{
    int i, j, n, y;
    scanf("%d", &n);

    for(i = 0, y = 0; i < 1000; i++) {
        printf("N[%d] = %d\n", i, y++);
        if(y >= n) y = 0;
    }

    return 0;
}