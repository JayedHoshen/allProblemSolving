#include <bits/stdc++.h>
using namespace std;

#define nl "\n"

int main()
{
    int a, b, c, max, min, sort;
    cin >> a >> b >> c;

    max = (a>b) ? (a>c?a:c) : (b>c?b:c);
    min = (a<b) ? (a<c?a:c) : (b<c?b:c);
    sort = (a+b+c) - (max+min);

    cout << min << nl << sort << nl << max << nl;
    cout << nl << a << nl << b << nl << c << nl;
    

    return 0;
}