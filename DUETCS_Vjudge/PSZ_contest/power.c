#include <stdio.h>

int main()
{
    int A, B, pow = 1;

    scanf("%d %d", &A, &B);

    for (int i = 1; i <= B; i++) {
        pow *= A;
    }

    printf("%d\n", pow);

    return 0;
}
