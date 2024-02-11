#include <bits/stdc++.h>
using namespace std;

int main()
{
    double AB, AC, A, tc;
    cin >> tc;

    for(int i = 1; i <= tc; i++) {
        cin >> AB >> AC;    
        A = AB*AB + AC*AC;
        printf("Case %d: %0.0lf\n", i, A);
    } 

    return 0;
}