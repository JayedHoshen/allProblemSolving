#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, tmp, n1 = 0, n2 = 1;

    cin >> n;

    for (i = 1; i <= n; i++) {
        tmp = n1 + n2;
        n1 = n2;
        n2 = tmp;
    }
    cout << n1 << "\n";

    return 0;
}