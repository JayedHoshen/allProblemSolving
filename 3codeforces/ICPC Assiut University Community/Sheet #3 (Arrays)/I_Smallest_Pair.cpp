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
        int n; cin >> n;
        int ara[n]; fi0(n) cin >> ara[i];
        int sum = INT_MAX;
        for(int i = 0; i < n-1; i++) {
            for(int j = i+1; j < n; j++) {
                sum = min(sum, (ara[i]+ara[j]+j-i));
            }
        }
        cout << sum << endl;
    }

    return 0;
}