#include <stdio.h>

int main()
{
    int n, i, max = 0, ps = 0;

    for(i = 1; i <= 100; i++) {
        scanf("%d", &n);

        if(n > max) {
            max = n;
            ps = i;
        }
    }

    printf("%d\n%d\n", max, ps);

    return 0;
}