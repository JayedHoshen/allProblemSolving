#include <stdio.h>

int main()
{
    double salary, tax_paid, tm1, tm2, tm3;

    scanf("%lf", &salary);

    if (salary >= 0 && salary <= 2000.00) {
        printf("Isento\n");
    }
    else if (salary <= 3000.00) {
        tax_paid = (salary - 2000.00) * 0.08;
        printf("R$ %0.2lf\n", tax_paid);
    }
    else if (salary <= 4500.00) {
        tm1 = 1000 * 0.08;
        tm2 = (salary - 3000.00) * 0.18;
        tax_paid = tm1 + tm2;
        printf("R$ %0.2lf\n", tax_paid);
    }
    else if (salary > 4500.00) {
        tm1 = 1000 * 0.08;
        tm2 = 1500 * 0.18;
        tm3 = (salary - 4500.00) * 0.28;
        tax_paid = tm1 + tm2 + tm3;
        printf("R$ %0.2lf\n", tax_paid);
    }

    return 0;
}
