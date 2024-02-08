#include <stdio.h>

int main()
{
    float n, r;

    scanf("%f", &n);

    if(n <= 2000.0) printf("Isento\n");
    else if(n > 2000.0 && n <= 3000.0) {
        r = (n - 2000.0) * 0.08;
        printf("R$ %0.2f\n", r);
    }
    else if(n > 3000.0 && n <= 4500.0) {
        r = (n - 3000.0) * 0.18 + 80;
        printf("R$ %0.2f\n", r);
    }
    else if(n > 4500.0) {
        r = (n - 4500.0) * 0.28 + 350;
        printf("R$ %0.2f\n", r);
    }


    return 0;
}