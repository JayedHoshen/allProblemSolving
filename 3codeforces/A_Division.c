#include <stdio.h>

int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        printf("Division ");
        if (n >= 1900) printf("1");
        else if (n >= 1600 && n <= 1899) printf("2");
        else if (n >= 1400 && n <= 1599) printf("3");
        else printf("4");
        printf("\n");
    }
    return 0;
}