#include <stdio.h>

int main()
{
    int i, n, x = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d ", x++);
        printf("%d ", x++);
        printf("%d ", x++);
        x++;
        printf("PUM\n");
    }

    return 0;
}
