#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;

    while(tc--) {
        int x, y; cin >> x >> y;

        int mn = min(x, y);
        int mx = max(x, y);

        int sum = 0;
        for(int i = mn+1; i < mx; i++) {
            if(i%2) sum += i;
        }

        cout << sum << endl;
    }

    return 0;
}