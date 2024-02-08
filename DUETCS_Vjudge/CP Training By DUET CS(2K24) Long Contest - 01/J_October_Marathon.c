#include <stdio.h>

int main()
{
    int X;

    scanf("%d", &X);

    if (X < 3) printf("GOLD\n");
    else if (X >= 3 && X < 6) printf("SILVER\n");
    else if (X >= 6) printf("BRONZE\n");

    return 0; 
}