#include <bits/stdc++.h>
using namespace std;

int main()
{   
    long long int r1, r2, x, m, n;

    cin >> x >> m >> n;

    r1 = (x*m) / (m+n);
    r2 = (x*n) / (m+n);

    cout << r1 << " " << r2 << "\n";

    return 0;
}