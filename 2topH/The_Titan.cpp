#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, sum = 0;
    cin >> n;

    for(i = 1; i <= n; i++) {
        sum += (i*i);
    }
    cout << sum << "\n";

    return 0;
}