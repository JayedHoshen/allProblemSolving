#include <bits/stdc++.h>
using namespace std;

int myPrime(int n);

int main()
{
    int n; 
    cin >> n;

    if(myPrime(n)) cout << "NO PUNISHMENT\n";
    else {
        for(int i = 1; i <= n; i++) cout << "I DID NOT DO THE ASSIGNMENT.\n";
    }

    return 0;
}

int myPrime(int n) {
    int i, root;

    if(n == 2) return 1;
    if(n < 2) return 0;
    if(n%2 == 0) return 0;

    root = sqrt(n);

    for(i = 3; i <= root; i+=2) {
        if(n%i == 0) {
            return 0;
        }
    }

    return 1;
}
