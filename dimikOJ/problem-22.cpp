#include <bits/stdc++.h>
using namespace std;

int isPrime(int num);

int main()
{
    int tc; cin >> tc;

    while(tc--) {
        int a, b, count = 0;

        cin >> a >> b;

        for(int i = a; i <= b; i++) {
            if(isPrime(i)) count++;
        }

        cout << count << endl;
    }

    return 0;
}

int isPrime(int n) {
    if(n <= 1) return 0;
    if(n <= 3) return 1;
    if(n%2 == 0 || n%3 == 0) return 0;
    
    for(int i = 5; i*i <= n; i+=6) {
        if(n%i == 0 || n%(i+2) == 0) return 0;
    }

    return 1;
}