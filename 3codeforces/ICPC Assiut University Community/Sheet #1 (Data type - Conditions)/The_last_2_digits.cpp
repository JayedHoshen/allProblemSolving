#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, c, d, r;

    cin >> a >> b >> c >> d;

    r = ((a%100)*(b%100)*(c%100)*(d%100)) % 100;

    if(r == 0) cout << "00\n";
    else if(r > 0 && r < 10) cout << "0" << r << endl;
    else cout << r << endl;

    return 0;
}