#include <stdio.h>

int main()
{
    int n, i, p = 0;

    scanf("%d", &n);
    int ara[n], min = 0;

    for(i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    min = ara[0];
    for(i = 0; i < n; i++) {
        if(ara[i] < min) {
            min = ara[i];
            p = i;
        } 
    }

    printf("Menor valor: %d\n", min);
    printf("Posicao: %d\n", p);

    return 0;
}