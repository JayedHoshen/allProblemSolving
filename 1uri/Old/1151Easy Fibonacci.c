#include <stdio.h>

int main()
{
    int n, i, temp, first = 1, second = 1;

    scanf("%d", &n);

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    printf("0");

    for (i = 1; i < n; i++){
        printf(" %d", first);
        temp = first;
        first = second;
        second = first + temp;
    }
    printf("\n");
}
