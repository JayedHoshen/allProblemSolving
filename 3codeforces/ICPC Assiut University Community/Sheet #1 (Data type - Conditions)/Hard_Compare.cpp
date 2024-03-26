#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;

    ((b*log(a)) - (d*log(c))) > 0 ? cout << "YES\n" : cout << "NO\n";

    return 0;
}