#include <stdio.h>

int main()
{
    int PA, PB, tc, CT;
    double G1, G2;
    scanf("%d", &tc);

    while(tc--) {
        CT = 0;
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
        while(PA <= PB) {
            PA += (PA*G1) / 100;
            PB += (PB*G2) / 100;
            CT++;
            if(CT > 100) {
                printf("Mais de 1 seculo.\n");
                break;
            } 
        }
        if(CT <= 100) printf("%d anos.\n", CT);
    }

    return 0;
}