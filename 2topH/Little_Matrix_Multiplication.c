#include <stdio.h>

int main()
{
    int A11, A12, A21, A22, B11, B12, B21, B22, C11, C12, C21, C22;
    scanf("%d %d %d %d %d %d %d %d", &A11, &A12, &A21, &A22, &B11, &B12, &B21, &B22);

    C11 = A11 *  B11 + A12 * B21;
    C12 = A11 *  B12 + A12 * B22;
    C21 = A21 *  B11 + A22 * B21;
    C22 = A21 *  B12 + A22 * B22;

    printf("%d %d\n%d %d\n", C11, C12, C21, C22);

    return 0;
}