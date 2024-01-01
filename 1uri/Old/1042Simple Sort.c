#include <stdio.h>

int main()
{
    int a, b, c, A, B, C, x;

    scanf("%d %d %d", &a, &b, &c);

    A = a;
    B = b;
    C = c;

    while ((a > b) || (b > c)) {
        if (a > b) {
            x = a;
            a = b;
            b = x;
        }
        if (b > c) {
            x = b;
            b = c;
            c = x;
        }
    }

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("\n");
    printf("%d\n", A);
    printf("%d\n", B);
    printf("%d\n", C);

    return 0;
}
