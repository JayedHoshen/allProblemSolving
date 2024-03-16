#include <stdio.h>

int main()
{
    int n, i, j, a, b;

    while(1) {
        scanf("%d", &n);
        if(n==0) break;

        int array[n][n];
        
        for(i = 0; i < n; i++) {
            a = i+1;
            b = 2;
            for(j = 0; j <= i; j++, a--) {
                array[i][j] = a;
            }
            for(j = i+1; j < n; j++, b++) {
                array[i][j] = b;
            }
        }

        // printing array
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                if(j == 0) printf("%3d", array[i][j]);
                else printf(" %3d", array[i][j]);
            } printf("\n");
        } printf("\n");
    }    

    return 0;
}