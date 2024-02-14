#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, n, mx = 0;

    cin >> tc;
    while(tc--) {
        cin >> n;
        if(n > mx) mx = n;
    }
    cout << mx << endl;

    return 0;
}