#include <stdio.h>

int main()
{
    int x, z, i, c = 0, s = 0;

    scanf("%d %d", &x, &z);

    for(i = 0; i < 10000; i++){
        if(x >= z){
            scanf("%d", &z);
        }
        else continue;
    }

    for(i = x; i < 10000; i++){
        s += i;
        c++;
        if(s > z) break;
    }
    printf("%d\n", c);

    return 0;
}
