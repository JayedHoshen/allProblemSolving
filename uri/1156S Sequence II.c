#include <stdio.h>

int main()
{
    int i;
    double s = 1.0, j = 2.0;

    for (i = 3; i < 40; i+=2) {
        s += (double)i / j;
        j *= 2;
    }

    printf("%.2lf\n", s);

    return 0;
}
