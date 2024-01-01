#include <stdio.h>

int main()
{
    char name[15];
    double fixed_salary, sales_month, total_salary;

    scanf("%s %lf %lf", &name, &fixed_salary, &sales_month);

    total_salary = fixed_salary + (sales_month * 15 / 100);

    printf("TOTAL = R$ %0.2lf\n", total_salary);

    return 0;
}
