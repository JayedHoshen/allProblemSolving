#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);

    int ara[n];
    for(i = 0; i < n; i++) scanf("%d", &ara[i]);

    for(i = n - 1; i >= 0; i--) printf("%d ", ara[i]);  

    return 0;
}