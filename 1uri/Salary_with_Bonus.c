#include <stdio.h>

int main()
{
    char name;
    double salary, bonus, total;

    scanf("%s", &name);
    scanf("%lf %lf", &salary, &bonus);

    total = (bonus * 15 / 100) + salary;

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}