#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, k, minimum = 1;
    
    cin >> n >> k;
    
    for(i = 1; i <= n; i++) {
        if((minimum*2) < (minimum+k)) minimum *= 2;
        else minimum += k;
    }
    cout << minimum << "\n";

    return 0;
}