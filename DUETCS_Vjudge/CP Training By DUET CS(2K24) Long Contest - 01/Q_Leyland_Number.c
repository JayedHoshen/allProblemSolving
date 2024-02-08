#include <stdio.h>
#include <math.h>

int main()
{
    int A, B, result;

    scanf("%d %d", &A, &B);

    result = pow(A,B) + pow(B,A);

    printf("%d\n", result);

    return 0;
}