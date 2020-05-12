#include <stdio.h>

int main()
{
    int n, i, j, x, y, t, s;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%d %d", &x, &y);

        if (x > y) {
            t = x;
            x = y;
            y = t;
        }
        s = 0;

        for (j = x+1; j < y; j++) {
            if (j%2 != 0) s += j;
        }

        printf("%d\n", s);
    }

    return 0;
}
