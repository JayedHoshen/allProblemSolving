#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;
    double a, b, c, s, area;

    while(tc--) {
        cin >> a >> b >> c;
        s = (a+b+c) / 2;
        area = (s*(s-a)*(s-b)*(s-c));

        if(area < 0) cout << "Oh, No!\n";
        else printf("%0.2lf\n", sqrt(area));
    }

    return 0;
}