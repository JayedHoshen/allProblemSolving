#include <stdio.h>

int main()
{
    double A, B, C, pi = 3.14159, triangle, circle, trapezium, square, rectangle;
    scanf("%lf %lf %lf", &A, &B, &C);

    triangle = A * C * 0.5;
    circle = pi * C * C;
    trapezium = 0.5 * (A + B) * C;
    square = B * B;
    rectangle = A * B;

    printf("TRIANGULO: %0.3lf\n", triangle);
    printf("CIRCULO: %0.3lf\n", circle);
    printf("TRAPEZIO: %0.3lf\n", trapezium);
    printf("QUADRADO: %0.3lf\n", square);
    printf("RETANGULO: %0.3lf\n", rectangle);

    return 0;
}
