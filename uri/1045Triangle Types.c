#include <stdio.h>

int main()
{
    double A, B, C, X;

    scanf("%lf %lf %lf", &A, &B, &C);

    while ((A < B) || (B < C)) {
        if (A < B){ X = A; A = B; B = X;}
        if (B < C){ X = B; B = C; C = X;}
    }

    if (A >= (B+C)) {
        printf("NAO FORMA TRIANGULO\n");
    }
    else {
        if ((A*A) == (B*B+C*C)) {
            printf("TRIANGULO RETANGULO\n");
        }
        if ((A*A) > (B*B+C*C)) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if ((A*A) < (B*B+C*C)) {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if ((A==B) && (B==C) && (A==C)) {
            printf("TRIANGULO EQUILATERO\n");
        }
        if ((A==B && A!=C) || (B==C && B!=A) || (A==C && A!=B)) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
