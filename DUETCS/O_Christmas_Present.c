#include <stdio.h>

int main()
{
    int B, G;

    scanf("%d %d", &B, &G);

    if (B > G) printf("Bat\n");
    else if (B < G) printf("Glove\n");

    return 0;
}