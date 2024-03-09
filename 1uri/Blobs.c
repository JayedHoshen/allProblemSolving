#include <stdio.h>

int main()
{
    int tc;
    scanf("%d", &tc);

    while(tc--) {
        int cont;
        double n;
        scanf("%lf", &n);

        cont = 0;
        while(n > 1) {
            cont++;
            n /= 2;
        }
        printf("%d dias\n", cont);
    }

    return 0;
}