#include <stdio.h>

int main()
{
    int tc, i, x, y, sum, a;

    scanf("%d", &tc);

    while(tc--) {
        scanf("%d %d", &x, &y);
        sum = 0;
        
        if(x%2) {
            a = x;
            for(i = 1; i <= y; i++) {
                sum += a;
                a += 2;
            }
        }
        else {
            x++;
            a = x;
            for(i = 1; i <= y; i++) {
                sum += a;
                a += 2;
            }
        } 

        printf("%d\n", sum);
    }

    return 0;
}