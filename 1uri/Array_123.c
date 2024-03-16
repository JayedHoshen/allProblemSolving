#include <stdio.h>

int main()
{
    int n, i, j, a, array[75][75];

    while(scanf("%d", &n ) != EOF) {          
        a = n - 1;
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                if(i == j) array[i][j] = 1;
                else array[i][j] = 3;
                if(j == a) array[i][j] = 2;
            }a--;
        }
        
        // printing array
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                printf("%d", array[i][j]);
            } printf("\n");
        } 
    }    

    return 0;
}