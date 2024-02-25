#include <stdio.h>

int main()
{
    int n, impar[5], par[5], oddCount = 0, evenCount = 0;

    for(int i = 0; i < 15; i++) {
        scanf("%d", &n);
        if(n&1) {
            if(oddCount == 5) {
                for(int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impar[j]);
                    oddCount = 0;
                }
            }
            impar[oddCount++] = n;
        }
        else {
            if(evenCount == 5) {
                for(int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                    evenCount = 0;
                }
            }
            par[evenCount++] = n;
        }
    }

    for(int k = 0; k < oddCount; k++) printf("impar[%d] = %d\n", k, impar[k]);
    for(int k = 0; k < evenCount; k++) printf("par[%d] = %d\n", k, par[k]);

    return 0;
}