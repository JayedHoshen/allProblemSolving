#include <bits/stdc++.h>
using namespace std;

#define ll long long 

void solve() {
    int n;
    cin >> n;
    int js;
    
    if(n%2 == 1) js = n/2+1; // even array size
    else js = n/2; // odd array size
    int bs = n/2;
    
    // all array input
    ll ja[js], ba[bs];
    for (int i = 0, jp = 0, bp = 0; i < n; i++) {
        int x;
        cin >> x;
        if(i%2 == 0) {
            ja[jp] = x;
            jp++;
        }
        else{
            ba[bp]=x;
            bp++;
        }
    }

    // calculate sum in even array
    ll j = 0, jm = -1e9;
    if(js>0) {
        for (int i = 0; i < js; i++) {
            if(ja[i]>=0) j += ja[i]; // j = sum of positive value
            jm = max(jm,ja[i]); // jm = compare & get negative max
        }
        if(jm<0) j = jm; // j = negative max
    }

    // calculate sum in even array
    ll b = 0, bm = -1e9;
    if(bs>0) {
        for (int i = 0; i < bs; i++) {
            if(ba[i]>=0) b += ba[i]; // b = sum of positive value
            bm = max(bm,ba[i]); // bm = compare & get negative max
        }
        if(bm<0) b = bm; // b = negative max
    }

    if(bs == 0) cout << j;
    else {
        cout << max(j,b);
    }
    cout << endl;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    
    return 0;
}