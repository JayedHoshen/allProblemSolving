#include <stdio.h>

int main()
{
    int ara[5], i, j, c = 0;

    for (i = 0; i < 5; i++) {
        scanf("%d", &ara[i]);

        for (j = 0; j < 5; j++) {
            if(ara[i] == ara[j]) break;
        }

        if(i == j) c++;
    }

    printf("%d\n", c);

    return 0;
}