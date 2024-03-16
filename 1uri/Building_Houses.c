#include <stdio.h>
#include <math.h>

int main()
{
    int A, B, C, sqt;

    while(1) {
        scanf("%d", &A);
        if(A==0) break;

        scanf("%d %d", &B, &C);

        sqt = sqrt((A*B*100)/C);

        printf("%d\n", sqt);
    }

    return 0;
}