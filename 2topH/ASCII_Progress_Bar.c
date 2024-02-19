#include<stdio.h>

int main(){
    int n, a, i;

    scanf("%d", &n);
    a = n/10;

    printf("[");
    for(i = 1; i <= a; i++) {
        printf("+");
    }
    for(i = 1; i <= (10-a); i++){
        printf(".");
    }
    printf("] %d%%", n);

    return 0;
}