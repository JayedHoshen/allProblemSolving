#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, a, r; 
    cin >> n >> k >> a;

    r = (a + k - 1) % n;
    if(r == 0) r = n;
    
    cout << r << "\n";

    return 0;
}
