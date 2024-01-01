#include <stdio.h>

int main()
{
    int n, i, s;

    while(1) {
        scanf("%d", &n);

        if (n == 0) break;
        else if (n%2 == 0) {
            s = 0;
            for (i = 0; i < 5; i++, n+=2) {
                s+=n;
            }
        }
        else if (n%2 != 0) {
            s = 0;
            n++;
            for (i = 0; i < 5; i++, n+=2) {
                s+=n;
            }
        }
        printf("%d\n", s);
    }

    return 0;
}
