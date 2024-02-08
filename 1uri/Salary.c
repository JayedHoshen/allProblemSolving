#include <stdio.h>

int main()
{   
    int n, wh;
    float sl;

    scanf("%d %d %f", &n, &wh, &sl);

    sl = wh * sl;

    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2f\n", sl);

    return 0;
}