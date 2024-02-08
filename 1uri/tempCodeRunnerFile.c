#include <stdio.h>

int main()
{
    int n, x, c = 0;
    scanf("%d", &n);
    int m = n;
    
    while(n--) {
        scanf("%d", &x);

        for(int i = 10; i <= 20; i++) {
            if(x == i) c++;
        }
    }

    printf("%d in\n", c);
    printf("%d out\n", (m-c));

    return 0;
}