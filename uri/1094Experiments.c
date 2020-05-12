#include <stdio.h>

int main()
{
    char ch;
    int n, i, amount, amount_c = 0, amount_r = 0, amount_s = 0;
    double total, percent_c, percent_r, percent_s;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%d %c", &amount, &ch);

        if (ch == 'C') amount_c += amount;
        if (ch == 'R') amount_r += amount;
        if (ch == 'S') amount_s += amount;
    }

    total = amount_c + amount_r + amount_s;
    percent_c = 100.00 / (total / amount_c);
    percent_r = 100.00 / (total / amount_r);
    percent_s = 100.00 / (total / amount_s);

    printf("Total: %.0lf cobaias\n", total);
    printf("Total de coelhos: %d\n", amount_c);
    printf("Total de ratos: %d\n", amount_r);
    printf("Total de sapos: %d\n", amount_s);
    printf("Percentual de coelhos: %0.2lf %%\n", percent_c);
    printf("Percentual de ratos: %0.2lf %%\n", percent_r);
    printf("Percentual de sapos: %0.2lf %%\n", percent_s);

    return 0;
}
