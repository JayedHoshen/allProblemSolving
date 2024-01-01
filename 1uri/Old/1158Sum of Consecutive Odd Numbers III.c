#include <stdio.h>

int main()
{
    int n, i, j, s = 0, x, y;

    scanf("%d", &n);

    for(j = 0; j < n; j++){
        scanf("%d %d", &x, &y);
        s = 0;
        if (x % 2 == 0){
            x++;
            for (i = 0; i < y; i++, x+=2){
                s += x;
            }
        }
        else if (x % 2 != 0){
            for (i = 0; i < y; i++, x+=2){
                s += x;
            }
        }
        printf("%d\n", s);
    }

    return 0;
}
