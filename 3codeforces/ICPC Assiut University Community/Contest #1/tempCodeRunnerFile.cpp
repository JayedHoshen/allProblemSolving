#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, k, a, r, cs;
    long long int R; 
    
    cin >> n >> k >> a;

    R = (n*k) / a;
    r = (n*k) / a;
    cs = r - R;

    if(cs > 0) cout << "double\n"; 
    else if(r > 2147483648) cout << "long long\n";
    else cout << "int\n";

    return 0;
}