#include <bits/stdc++.h>
using namespace std;

int myPrime(int num);

int main()
{
    int n; cin >> n;
    int i = 2, c = 0;

    while(1) {
        if(myPrime(i)) c++;
        if(c == n) {
            cout << i << endl;
            break;
        }
        i++;
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