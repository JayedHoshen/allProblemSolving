#include <stdio.h>

int main()
{
    double A, B, C, Area, perimeter;

    scanf("%lf %lf %lf", &A, &B, &C);

    if (((A+B) > C) && ((B+C) > A) && ((A+C) > B)) {
        perimeter = A + B + C;
        printf("Perimetro = %0.1lf\n", perimeter);
    }
    else {
        Area = 0.5 * (A+B) * C;
        printf("Area = %0.1lf\n", Area);
    }

    return 0;
}
