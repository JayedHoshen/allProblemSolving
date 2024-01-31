#include <stdio.h>

int main()
{
    int n, r, t, count_2, count_3;

    scanf("%d", &t);
    
    while(t--) {
        scanf("%d", &n);
        count_2 =  0, count_3 = 0;
        while(!(n%2)) {
            n /= 2;
            count_2++;
        } 
        while(!(n%3)) {
            n /= 3;
            count_3++;
        } 

        if(n != 1 || count_2 > count_3) printf("-1\n");
        else {
            r = (count_3 - count_2) + count_3;
            printf("%d\n", r);
        }
    }
    
    return 0;
}
