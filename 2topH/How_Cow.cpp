#include <bits/stdc++.h>
using namespace std;

int main()
{
    double r, A, tc;
    cin >> tc;

    while(tc--) {
        cin >> r;
        A = 3.1416*r*r;
        printf("%0.3lf\n", A);
    }

    return 0;
}