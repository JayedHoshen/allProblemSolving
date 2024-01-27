#include <stdio.h>

int main()
{
    int t, a, b, c, d, r = 0;
    scanf("%d", &t);

    while (t--) {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        r = (a<b) + (a<c) + (a<d);
        printf("%d\n", r);
    }

    return 0;
}