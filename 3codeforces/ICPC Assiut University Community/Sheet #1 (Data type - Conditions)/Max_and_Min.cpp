#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, min, max;

    cin >> a >> b >> c;

    min = a < b ? (a < c ? a : c) : (b < c ? b : c);
    max = a > b ? (a > c ? a : c) : (b > c ? b : c);

    cout << min << ' ' << max << endl;

    return 0;
}