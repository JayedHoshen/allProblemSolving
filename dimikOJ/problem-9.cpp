#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;

    while(tc--) {
        int n, sq; cin >> n;
        
        sq = sqrt(n);

        if((sq*sq) == n) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}