#include <bits/stdc++.h>
using namespace std;

#define nl endl 

int main()
{
    int a, b, c, mn, mx, md;
    cin >> a >> b >> c;

    mn = a < b ? (a < c ? a : c) : (b < c ? b : c);
    mx = a > b ? (a > c ? a : c) : (b > c ? b : c);
    md = (a+b+c) - (mx+mn);

    cout << mn << nl << md << nl << mx << nl << nl;
    cout << a << nl << b << nl << c << nl;

    return 0;
}