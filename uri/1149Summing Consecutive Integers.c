#include <stdio.h>

int main()
{
    int a, n, i, s = 0;

    scanf("%d %d", &a, &n);

    for(i = 0; i < 10000; i++){
        if(n <= 0){
            scanf("%d", &n);
        }
        else{
            continue;
        }
    }

    for(i = a; i < a+n; i++){
        s += i;
    }

    printf("%d\n", s);

    return 0;
}
