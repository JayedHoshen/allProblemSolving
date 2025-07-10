#include <bits/stdc++.h>
#define FIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fi0(n) for(int i = 0; i < n; i++)
#define ll long long int
using namespace std;

int main()
{
    FIO(); 

    int n, tc; cin >> n >> tc;    
    vector <int> a(n); fi0(n) cin >> a[i];

    while(tc--) {
        int l, r, v; 
        cin >> l >> r >> v;
        l--; r--;
        
        bool ans = false;
        for(int i = l; i <= r; i++) {
            if(a[i] == v) {
                ans = true;
                break;
            }
        }

        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}