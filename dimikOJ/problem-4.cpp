#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, i, n, j;
    cin >> tc;

    for(i = 1; i <= tc; i++) {
        cin >> n;
        cout << "Case " << i << ":";

        for(j = 1; j <= n; j++) {
            if(n%j == 0) cout << ' ' << j;
        }
        cout << endl;
    }

    return 0;
}