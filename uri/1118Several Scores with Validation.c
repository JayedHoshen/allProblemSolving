#include <stdio.h>

int main()
{
    int count = 0, j;
    float n, avg, score[2];

    while(scanf("%f", &n)){
        if(n >= 0.0 && n <= 10.0){
            score[count] = n;
            count += 1;
            if(count == 2){
                avg = (score[0] + score[1]) / 2;
                printf("media = %.2f\n", avg);
                count = 0;
                do{
                    printf("novo calculo (1-sim 2-nao)\n");
                    scanf("%d", &j);
                    if(j == 2) return 0;
                }while(j != 1);
                j = 0;
            }
            continue;
        }
        else printf("nota invalida\n");
    }

    return 0;
}
