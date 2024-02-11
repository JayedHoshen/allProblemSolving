#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, tc, max = 0;

    cin >> tc;

    while(tc--) {
        cin >> n;

        if(n > max) max = n;
    }

    cout << max << "\n";

    return 0;
}