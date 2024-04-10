#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;

    while(tc--) {
        int i, n, ara[101];

        cin >> n; 
        
        ara[n];
        for(i = 0; i < n; i++) cin >> ara[i];

        for(i = 0; i < n-2; i+=2) {
            cout << ara[i] << ' ';
        }
        
        if(n%2) cout << ara[n-1];
        else cout << ara[n-2];

        cout << endl;
    }

    return 0;
}