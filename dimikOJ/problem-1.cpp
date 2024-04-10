#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int tc, n;
    
    cin >> tc;
    
    while(tc--) {
        cin >> n;
        if(n&1) cout << "odd\n";
        else cout << "even\n";
    }
    
    return 0;
}