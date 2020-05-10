#include <stdio.h>

int main()
{
    double salary, earned_salary, total_salary;

    scanf("%lf", &salary);

    if (salary >= 0 && salary <= 400.00) {
        earned_salary = salary * 15 / 100.00;
        total_salary = salary + earned_salary;
        printf("Novo salario: %0.2lf\n", total_salary);
        printf("Reajuste ganho: %0.2lf\n", earned_salary);
        printf("Em percentual: 15 %%\n");
    }
    else if (salary <= 800.00) {
        earned_salary = salary * 12 / 100.00;
        total_salary = salary + earned_salary;
        printf("Novo salario: %0.2lf\n", total_salary);
        printf("Reajuste ganho: %0.2lf\n", earned_salary);
        printf("Em percentual: 12 %%\n");
    }
    else if (salary <= 1200.00) {
        earned_salary = salary * 10 / 100.00;
        total_salary = salary + earned_salary;
        printf("Novo salario: %0.2lf\n", total_salary);
        printf("Reajuste ganho: %0.2lf\n", earned_salary);
        printf("Em percentual: 10 %%\n");
    }
    else if (salary <= 2000.00) {
        earned_salary = salary * 7 / 100.00;
        total_salary = salary + earned_salary;
        printf("Novo salario: %0.2lf\n", total_salary);
        printf("Reajuste ganho: %0.2lf\n", earned_salary);
        printf("Em percentual: 7 %%\n");
    }
    else if (salary > 2000.00) {
        earned_salary = salary * 4 / 100.00;
        total_salary = salary + earned_salary;
        printf("Novo salario: %0.2lf\n", total_salary);
        printf("Reajuste ganho: %0.2lf\n", earned_salary);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}
