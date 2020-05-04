#include <stdio.h>

int main()
{
    int product_one_code, product_two_code, product_unit_one, product_unit_two;
    double product_price_one, product_price_two, total_paid;

    scanf("%d %d %lf", &product_one_code, &product_unit_one, &product_price_one);
    scanf("%d %d %lf", &product_two_code, &product_unit_two, &product_price_two);

    total_paid = (product_unit_one * product_price_one) + (product_unit_two * product_price_two);

    printf("VALOR A PAGAR: R$ %0.2lf\n", total_paid);

    return 0;
}
