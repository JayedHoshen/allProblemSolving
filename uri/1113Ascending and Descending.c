#include <stdio.h>

int main()
{
    int x, y, j;

    for (j = 0; j < 1000000; j++) {
        scanf("%d %d", &x, &y);

        if (x == y) break;

        else if (x < y) printf("Crescente\n");
        else printf("Decrescente\n");
    }

    return 0;
}
