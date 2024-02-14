#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, i, p, k, d, r;
    cin >> tc;
   
    for(i = 1; i <= tc; i++) {
        cin >> p >> k >> d;
        r = p;
        while((p+k) >= r) r += d;
        printf("Case %d: %d\n", i, r);
    } 
    
    return 0;
}