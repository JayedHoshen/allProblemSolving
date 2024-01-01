#include <stdio.h>

int main()
{
    int n, alco = 0, gaso = 0, dies = 0;

    while (1) {
        scanf("%d", &n);

        if (n == 4) break;
        else if (n == 1) alco++;
        else if (n == 2) gaso++;
        else if (n == 3) dies++;
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alco);
    printf("Gasolina: %d\n", gaso);
    printf("Diesel: %d\n", dies);

    return 0;
}
