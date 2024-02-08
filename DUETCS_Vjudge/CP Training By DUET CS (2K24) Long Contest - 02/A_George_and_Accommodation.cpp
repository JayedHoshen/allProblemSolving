#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, q, valid = 0;

    cin >> n;
    
    while(n--) {
        cin >> p >> q;
        valid += (q-p >= 2);
    }

    cout << valid << "\n";

    return 0;
}