#include <stdio.h>

int main()
{
    int k, h = 21, m = 0;

    scanf("%d", &k);

    if (k >= 60) {
        m = k - 60;
        h++;
    }
    else m = k;

    if (m/10==0) {
        printf("%d:0%d\n", h, m);
    }
    else printf("%d:%d\n", h, m);

    return 0;
}