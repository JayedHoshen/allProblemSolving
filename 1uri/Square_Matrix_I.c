#include <stdio.h>

int main()
{
    int n, i, j, l, hn, a, b;

    while(1) {
        scanf("%d", &n);
        if(n==0) break;

        int array[n][n];

        hn = n / 2;
        if(n%2) hn++;
        a = 0;
        b = n-1;
        
        for(l = 1; l <= hn; l++) {
            for(i = a; i <= b; i++) {
                for(j = a; j <= b; j++) {
                    array[i][j] = l;
                }
            }
            a++; b--;
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