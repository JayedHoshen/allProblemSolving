#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, i, a, b, sum, sub;
    cin >> tc;

    for(i = 1; i <= tc; i++) {
        cin >> a >> b;
        sum = a+b;
        sub = a-b;
        printf("Case %d: %d%d\n", i, sum, sub);
    }

    return 0;
}