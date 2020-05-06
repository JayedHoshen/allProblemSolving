#include<iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    double A, B, C, d, x1, x2;

    scanf("%lf %lf %lf", &A, &B, &C);

    d = sqrt((B*B) - 4 * (A*C));

    if ((int)d > 0 && A != 0) {
        x1 = (- B + d) / (2 * A);
        x2 = (- B - d) / (2 * A);

        printf("R1 = %0.5lf\n", x1);
        printf("R2 = %0.5lf\n", x2);
    }
    else {
        printf("Impossivel calcular\n");
    }

    return 0;
}
