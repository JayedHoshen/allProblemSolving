#include <stdio.h>

int main()
{
    int i, j, ara[20];

    for(i = 0, j = 19; i < 20; i++, j--) {
        scanf("%f", &ara[i]);
        ara[j] = ara[i];
        printf("N[%d] = %d\n", i, ara[j]);
    }

    return 0;
}