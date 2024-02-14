#include <stdio.h>

int main()
{
    int i, j, n;

    for(i = 1, n = 7; i <= 10; i+=2, n+=2) {
        for(j = n; j > n-3; j--) printf("I=%d J=%d\n", i, j);
    }

    return 0;
}