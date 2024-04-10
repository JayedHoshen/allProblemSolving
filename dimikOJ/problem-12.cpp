#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;

    while(tc--) {
        int n, a;      

        cin >> n;
        
        a = n / 5;
        
        cout << (a+(a/5)) << endl;
    }

    return 0;
}