#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, a, b, c;

    cin >> tc;

    for(int i = 1; i <= tc; i++) {
        cin >> a >> b >> c;

        int min = a < b ? (a < c ? a : c) : (b < c ? b : c);
        int max = a > b ? (a > c ? a : c) : (b > c ? b : c);
        int mid = (a+b+c) - (min+max);

        cout << "Case " << i << ": " << min << ' ' << mid << ' ' << max << endl;
    }

    return 0;
}