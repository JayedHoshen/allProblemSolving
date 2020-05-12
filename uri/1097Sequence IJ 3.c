#include <stdio.h>

int main()
{
    int i, j, k, s = 7;

    for (k = 1; k <= 9; k += 2) {
        for (i = k, j = s; j >= s-2; j--) {
            printf("I=%d J=%d\n", i, j);
        }
        s += 2;
    }
    return 0;
}
