#include <stdio.h>

int myPrime(int n);

int main()
{
    int tc, n;
    scanf("%d", &tc);

    while(tc--) {
        scanf("%d", &n);
        if(myPrime(n)) printf("%d eh primo\n", n);
        else printf("%d nao eh primo\n", n);
    }

    return 0;
}

int myPrime(int num) {
    if(num < 1) return 0;
    if(num <= 3) return 1;
    if(num%2 == 0 || num%3 == 0) return 0;

    for(int i = 5; i*i <= num; i+=6) {
        if(num%i == 0 || num%(i+2) == 0) return 0;
    }    
    return 1;
}