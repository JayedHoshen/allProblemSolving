#include <stdio.h>

int main()
{
    float n, total, bonus;

    scanf("%f", &n);

    if(n >= 0.0 && n <= 400.00) {
        bonus = n*0.15;
        total = n + bonus;
        printf("Novo salario: %0.2f\n", total);
        printf("Reajuste ganho: %0.2f\n", bonus);
        printf("Em percentual: 15 %%\n");
    }
    else if(n > 400.0 && n <= 800.00) {
        bonus = 0.12*n;
        total = n + bonus;
        printf("Novo salario: %0.2f\n", total);
        printf("Reajuste ganho: %0.2f\n", bonus);
        printf("Em percentual: 12 %%\n");
    }
    else if(n > 800.00 && n <= 1200.00) {
        bonus = 0.1*n;
        total = n + bonus;
        printf("Novo salario: %0.2f\n", total);
        printf("Reajuste ganho: %0.2f\n", bonus);
        printf("Em percentual: 10 %%\n");
    }
    else if(n > 1200.0 && n <= 2000.00) {
        bonus = 0.07*n;
        total = n + bonus;
        printf("Novo salario: %0.2f\n", total);
        printf("Reajuste ganho: %0.2f\n", bonus);
        printf("Em percentual: 7 %%\n");
    }
    else if(n > 2000.00) {
        bonus = 0.04*n;
        total = n + bonus;
        printf("Novo salario: %0.2f\n", total);
        printf("Reajuste ganho: %0.2f\n", bonus);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}