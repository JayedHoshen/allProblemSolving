#include <stdio.h>

int main()
{
    int i, x, y, a = 1;
    scanf("%d %d", &x, &y);

    for(i = 1; i <= y; i++) {
        if(a == x)  {
            printf("%d\n", i);
            a = 1;
        }
        else {
            printf("%d ", i);
            a++;
        }
    }

    return 0;
}