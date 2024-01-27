#include <stdio.h>

int main()
{
    int a, b, c, min, max, mid;

    printf("Enter three number = ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Before sorting = %d %d %d\n", a, b, c);

    min = (a<b) ? (a<c?a:c) : (b<c?b:c);
    max = (a>b) ? (a>c?a:c) : (b>c?b:c);

    mid = (a+b+c) - (min+max);

    printf("After sorting = %d %d %d\n", min, mid, max);

    return 0;
}