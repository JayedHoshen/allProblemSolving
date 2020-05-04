#include <stdio.h>

int main()
{
    int n, hundrednote, fiftynote, twentynote, tennote, fivenote, twonote, onenote;

    scanf("%d", &n);
    printf("%d\n", n);

    if (n >= 0 && n <= 1000000) {
        hundrednote=(n-(n%100))/100;
        n=(n%100);
        fiftynote=(n-(n%50))/50;
        n=(n%50);
        twentynote=(n-(n%20))/20;
        n=(n%20);
        tennote=(n-(n%10))/10;
        n=(n%10);
        fivenote=(n-(n%5))/5;
        n=(n%5);
        twonote=(n-(n%2))/2;
        n=(n%2);
        onenote=n;
        printf("%d nota (s) de R$ 100,00\n", hundrednote);
        printf("%d nota (s) de R$ 50,00\n", fiftynote);
        printf("%d nota (s) de R$ 20,00\n", twentynote);
        printf("%d nota (s) de R$ 10,00\n", tennote);
        printf("%d nota (s) de R$ 5,00\n", fivenote);
        printf("%d nota (s) de R$ 2,00\n", twonote);
        printf("%d nota (s) de R$ 1,00\n", onenote);
    }

    return 0;
}
