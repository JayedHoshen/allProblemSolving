#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int tc; cin >> tc;

    while(tc--) {
        ll n, fact = 1; 
        
        cin >> n;

        for(int i = 1; i <= n; i++) fact *= i;

        cout << fact << endl;
    }

    return 0;
}