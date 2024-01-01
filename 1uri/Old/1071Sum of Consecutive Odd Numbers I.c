#include <stdio.h>

int main()
{
    int x, y, temp, i, s = 0;

    scanf("%d %d", &x, &y);

    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }

    for (i = x+1; i < y; i++) {
        if (i%2 != 0) {
            s += i;
        }
    }

    printf("%d\n", s);

    return 0;
}
