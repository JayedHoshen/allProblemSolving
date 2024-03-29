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
    int i, root;
    if(num == 2) return 1;
    if(num < 2) return 0;
    if(num%2 == 0) return 0;

    root = sqrt(num);

    for(i = 3; i <= root; i+=2) {
        if(num%i == 0) return 0;
    }
    
    return 1;
}