#include <stdio.h>

int main()
{
    float ara[100];
    int i;

    for(i = 0; i < 100; i++) {
        scanf("%f", &ara[i]);
        if(ara[i] <= 10) printf("A[%d] = %.1f\n", i, ara[i]);
    }

    return 0;
}