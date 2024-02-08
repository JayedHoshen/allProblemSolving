#include <stdio.h>

int main()
{
    float i, n, c = 0;

    for(i = 1; i <= 6; i++) {
        scanf("%f", &n);

        if(n > 0) c++;
    }
    printf("%0.0f valores positivos\n", c);

    return 0;
}