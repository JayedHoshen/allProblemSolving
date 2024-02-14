#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, a, b, c;
    cin >> tc;

    while(tc--) {
        cin >> a >> b >> c;

        if((a+b >= c) && (a+c >= b) && (b+c >= a))
        cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}