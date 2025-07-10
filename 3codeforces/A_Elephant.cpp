#include <bits/stdc++.h>
#define FIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fi0(n) for(int i = 0; i < n; i++)
#define ll long long int
using namespace std;

int main()
{
    FIO(); 

    int tc = 1;// cin >> tc;
    while(tc--) {
        int n; cin >> n;

        int ans = 0;
        ans += (n/5); n %= 5;
        ans += (n/4); n %= 4;
        ans += (n/3); n %= 3;
        ans += (n/2); n %= 2;
        ans += n;

        cout << ans << '\n';
    }

    return 0;
}