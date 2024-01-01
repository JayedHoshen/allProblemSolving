#include <stdio.h>

int main()
{
    int x, y, t, i, j, s;

    for (j = 0; j < 1000000; j++) {
        scanf("%d %d", &x, &y);

        if (x <= 0 || y <= 0) break;

        else if (x > y) {
            t = x;
            x = y;
            y = t;
        }

        s = 0;

        for (i = x; i <= y; i++) {
            s += i;
            printf("%d ", i);
        }

        if (s > 0) printf("Sum=%d\n", s);
    }

    return 0;
}
