#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;

    while(tc--) {
        int a, b, n1, n2, t, gcd, lcm;

        cin >> a >> b;

        n1 = a;
        n2 = b;

        while(n2 != 0) {
            t = n2;
            n2 = n1 % n2;
            n1 = t;
        }
        gcd = n1;
        lcm = (a*b) / gcd;

        cout << "LCM = " << lcm << endl;
    }

    return 0;
}