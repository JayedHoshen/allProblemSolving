#include <stdio.h>

int main()
{
    int A, B, X, Y, x, y;

    scanf("%d %d %d %d", &A, &B, &X, &Y);

    x = A*2 + B;
    y = X*2 + Y;

    if (x > y) printf("Messi\n");
    else if (x < y) printf("Ronaldo\n");
    else printf("Equal\n");

    return 0;
}
