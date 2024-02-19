#include <stdio.h>

int main()
{
    int i, j, ara[20], array[20];

    for(i = 0, j = 19; i < 20; i++, j--) {
        scanf("%d", &ara[i]);
        array[j] = ara[i];
    }
    for(j = 0; j < 20; j++) printf("N[%d] = %d\n", j, array[j]);
    
    return 0;
}