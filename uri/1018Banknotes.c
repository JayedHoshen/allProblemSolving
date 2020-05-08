#include <stdio.h>

int main()
{
    int num, n, note100, note50, note20, note10, note5, note2, note1;

    scanf("%d", &n);

    num = n;

    note100 = n / 100;
    n %= 100;

    note50 = n / 50;
    n %= 50;

    note20 = n / 20;
    n %= 20;

    note10 = n / 10;
    n %= 10;

    note5 = n / 5;
    n %= 5;

    note2 = n / 2;
    n %= 2;

    note1 = n;

    printf("%d\n", num);
    printf("%d nota(s) de R$ 100.00\n", note100);
    printf("%d nota(s) de R$ 50.00\n", note50);
    printf("%d nota(s) de R$ 20.00\n", note20);
    printf("%d nota(s) de R$ 10.00\n", note10);
    printf("%d nota(s) de R$ 5.00\n", note5);
    printf("%d nota(s) de R$ 2.00\n", note2);
    printf("%d nota(s) de R$ 1.00\n", note1);

    return 0;
}
