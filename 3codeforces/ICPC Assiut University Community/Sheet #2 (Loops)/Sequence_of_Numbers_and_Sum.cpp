#include <bits/stdc++.h>
using namespace std;

int main()
{
    while(true) {
        int n, m;
        cin >> n >> m;

        int mn = min(n, m);
        int mx = max(n, m);

        if(mn <= 0) break;

        int sum = 0;
        for(int i = mn; i <= mx; i++) {
            sum += i;
            cout << i << " ";
        }

        cout << "sum =" << sum << endl;
    }

    return 0;
}