#include <stdio.h>

int main()
{
    int emp_num, work_hr;
    double salary_per_hr , salary_month;

    scanf("%d %d %lf", &emp_num, &work_hr, &salary_per_hr);

    salary_month = work_hr * salary_per_hr;

    printf("NUMBER = %d\n", emp_num);
    printf("SALARY = U$ %0.2lf\n", salary_month);

    return 0;
}
