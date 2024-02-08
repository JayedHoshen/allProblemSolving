#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, n, k, i, a;
    cin >> tc;

    while(tc--) {
        bool flag = false;
        cin >> n >> k;

        for(i = 0; i < n; i++) {
            cin >> a;
            if(k == a) flag = true;
        }        
        if(flag == true) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}