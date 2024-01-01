#include <stdio.h>

int main()
{
    int n, second, minute, hour;

    scanf("%d", &n);

    hour = n / 3600;
    minute = n / 60 - hour * 60;
    second = n % 60;

    printf("%d:%d:%d\n", hour, minute, second);

    return 0;
}
