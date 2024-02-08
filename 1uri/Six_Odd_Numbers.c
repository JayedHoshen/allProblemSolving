#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    for(i = 1; i <= 6; i++, n+=2) {
        if(n%2==0) n++;
        printf("%d\n", n);
    }

    return 0;
}