#include <stdio.h>

int main()
{
    int X;
    float Y;

    scanf("%d %f", &X, &Y);

    if ((X+.50) > Y || X%5 != 0) printf("%.2f\n", Y);
    else if(X%5 == 0) {
        Y -= (X+.50);
        printf("%.2f\n", Y);
    } 
    
    return 0;
}