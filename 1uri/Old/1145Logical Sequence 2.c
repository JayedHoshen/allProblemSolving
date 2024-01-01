#include <stdio.h>

int main()
{
    int i, x, y, e = 1;

    scanf("%d %d", &x, &y);

    for(i = 1; i <= y; i++){
        if(e == x){
            printf("%d\n", i);
            e = 1;
        }
        else{
            printf("%d ", i);
            e++;
        }
    }

    return 0;
}
