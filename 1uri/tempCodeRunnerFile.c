#include <stdio.h>

int main()
{
    int tc;
    scanf("%d", &tc);

    while(tc--) {
        int r, cont = 0;
        float n;
        scanf("%f", &n);
        while(1) {
            r = n / 2;
            cont++;
            if(r==0) break;
        }
        printf("%d dias\n", cont);
    }

    return 0;
}