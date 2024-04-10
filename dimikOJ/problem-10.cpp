#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;

    while(tc--) {
        double r1, r2, b, cr, rr;
        cin >> r1 >> r2 >> b;

        cr = r2 / ((300-b) / 6);
        
        if(r2 > r1) rr = 0.00;
        else rr = (r1 - r2 + 1) / (b / 6);

        printf("%0.2lf %0.2lf\n", cr, rr);
    }

    return 0;
}