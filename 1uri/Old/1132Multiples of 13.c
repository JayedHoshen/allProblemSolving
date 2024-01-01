#include <stdio.h>

int main()
{
    int i, x, y, t, s = 0;

    scanf("%d %d", &x, &y);

    if (x > y) {
        t = x;
        x = y;
        y = t;
    }

    for (i = x; i <= y; i++) {
        if (i%13 != 0) s += i;
    }

    printf("%d\n", s);

    return 0;
}
