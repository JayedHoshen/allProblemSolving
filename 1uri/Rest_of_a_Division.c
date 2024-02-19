#include <stdio.h>

int main()
{
    int x, y, i, mn, mx;

    scanf("%d %d", &x, &y);
    mn = x < y ? x : y;
    mx = x > y ? x : y;

    for(i = mn+1; i < mx; i++) {
        if(i%5 == 2 || i%5 == 3) printf("%d\n", i);
    }

    return 0;
}