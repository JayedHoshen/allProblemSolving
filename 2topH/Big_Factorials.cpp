#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int fact = 1, n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    } 

    if(n < 20) {
        fact %= 10000;
        cout << fact << "\n";
    } 
    else cout << "0000\n";

    return 0;
}