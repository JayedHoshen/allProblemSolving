#include <stdio.h>

int main()
{
    int tc, a, b;
    float div;
    scanf("%d", &tc);

    while(tc--) {
        scanf("%d %d", &a, &b);
        
        if(b == 0) printf("divisao impossivel\n");
        else {
            div = (float)a / b;
            printf("%0.1f\n", div);
        }
    }

    return 0;
}