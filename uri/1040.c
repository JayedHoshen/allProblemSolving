#include <stdio.h>

int main()
{
    double n1, n2, n3, n4, n5, sum, avg, avg2;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    sum = (n1*2) + (n2*3) + (n3*4) + (n4*1);
    avg = sum / (2+3+4+1);

    printf("Media: %0.1lf\n", avg);

    if(avg >= 7.0) {
        printf("Aluno aprovado.\n");
    }
    else if (avg >= 5.0) {
        printf("Aluno em exame.\n");

        scanf("%lf", &n5);
        printf("Nota do exame: %0.1lf\n", n5);

        avg2 = (avg + n5) / 2;

        if(avg2 >= 5.0) {
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %0.1lf\n", avg2);
    }
    else{
        printf("Aluno reprovado.\n");
    }

    return 0;
}
