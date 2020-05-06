#include <stdio.h>

int main() {

    int n, note100, note50, note20, note10, note5, note2;
    int c1, c2, c3, c4, c5;
    double N;

    scanf("%lf", &N);

    n = N * 100;

    note100 = n / 10000;
    n = n % 10000;

    note50 = n / 5000;
    n = n % 5000;

    note20 = n / 2000;
    n = n % 2000;

    note10 = n / 1000;
    n = n % 1000;

    note5 = n / 500;
    n = n % 500;

    note2 = n / 200;
    n = n % 200;

    c1 = n / 100;
    n = n % 100;

    c2 = n / 50;
    n = n % 50;

    c3 = n / 25;
    n = n % 25;

    c4 = n / 10;
    n = n % 10;

    c5 = n / 5;
    n = n % 5;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", note100);
    printf("%d nota(s) de R$ 50.00\n", note50);
    printf("%d nota(s) de R$ 20.00\n", note20);
    printf("%d nota(s) de R$ 10.00\n", note10);
    printf("%d nota(s) de R$ 5.00\n", note5);
    printf("%d nota(s) de R$ 2.00\n", note2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", c1);
    printf("%d moeda(s) de R$ 0.50\n", c2);
    printf("%d moeda(s) de R$ 0.25\n", c3);
    printf("%d moeda(s) de R$ 0.10\n", c4);
    printf("%d moeda(s) de R$ 0.05\n", c5);
    printf("%d moeda(s) de R$ 0.01\n", n);

    return 0;
}

