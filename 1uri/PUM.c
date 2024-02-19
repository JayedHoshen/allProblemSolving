#include <stdio.h>

int main()
{
    int tc, i, j, n = 1;
    scanf("%d", &tc);

    for(i = 1; i <= tc; i++) {               
        for(j = 1;  j <= 3; j++) {
            if(n%4 == 0) n++;
            printf("%d ", n++);
        }
        printf("PUM\n");
    }

    return 0;
}