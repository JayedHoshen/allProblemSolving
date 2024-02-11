#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, n, i, j, c; 
    double gpa, sum, p;
    cin >> tc;

    for(int j = 1; j <= tc; j++) {
        cin >> n;
        sum = 0;
        c = 0;

        for(int i = 1; i <= n; i++) {
            cin >> p;
            sum += p;
            c++;
        }
        gpa = sum / c;

        printf("Case %d: %0.3lf\n", j, gpa);
    }

    return 0;
}