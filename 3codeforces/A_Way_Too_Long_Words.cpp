#include <bits/stdc++.h>
#define FIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fi0(n) for(int i = 0; i < n; i++)
#define ll long long int
using namespace std;

int main()
{
    FIO(); 

    int tc = 1; cin >> tc;
    while(tc--) {
        string s; cin >> s;
        int sz = s.size();
        if(sz > 10) cout << s[0] << sz-2 << s[sz - 1] << '\n';
        else cout << s << '\n';
    }

    return 0;
}