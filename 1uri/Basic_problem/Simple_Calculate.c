#include <stdio.h>

int main()
{
    int code, unit, tc = 2;
    double price, sum = 0.0;

    while(tc--) {
        scanf("%d %d %lf", &code, &unit, &price);
        sum += (price*unit);
    }
    printf("VALOR A PAGAR: R$ %.2lf\n", sum);

    return 0;
}