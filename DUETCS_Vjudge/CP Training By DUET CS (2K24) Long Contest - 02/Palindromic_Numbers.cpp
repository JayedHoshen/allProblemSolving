#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, n, i, j, sum;
    cin >> tc;

    for(i = 1; i <= tc; i++) {
        cin >> n;  
        sum = 0;
        cout << "Case " << i;
        for(j = n; j > 0; j/=10) {
            sum = sum * 10 + (j%10);
        }
        if(n==sum) cout << ": Yes\n";
        else cout << ": No\n";
    }

    return 0;
}