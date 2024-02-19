#include <stdio.h>

int main()
{
    float a, s = 0, avg;
    int c = 0;

    while(1) {
        scanf("%f", &a);

        if(a < 0.0 || a > 10.0) printf("nota invalida\n");
        else {
            s += a;
            c++;
        }

        if(c == 2) {
            printf("media = %0.2f\n", (s/2));
            break;
        } 
    }

    return 0;
}