#include <stdio.h>

int main()
{
    int i, x, sum, a;  

    while(1) {
        scanf("%d", &x);
        if(x==0) break;
        sum = 0;
        
        if(x%2) {
            a = ++x;
            for(i = 1; i <= 5; i++) {
                sum += a;
                a += 2;
            }
        }
        else {
            a = x;
            for(i = 1; i <= 5; i++) {
                sum += a;
                a += 2;
            }
        } 

        printf("%d\n", sum);
    }

    return 0;
}