#include <bits/stdc++.h>
using namespace std;

#define nl "\n"

int main()
{
    double deg, h, m, x, y;

    cin >> h >> m;

    h = (h*5) + (5.0/60 * m);    
    x = abs(h-m);
    y = 60 - x;

    if (x < y) deg = x * 6.0;
    else deg = y * 6.0;

    cout << deg << nl;

    return 0;
}