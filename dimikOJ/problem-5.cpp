#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i, j;
    cin >> t;

    while(t--) {
        cin >> n;

        for(i = 1; i <= n; i++) {
            for(j = 1; j <= n; j++) cout << "*";
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}