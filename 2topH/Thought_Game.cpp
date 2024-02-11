#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, x, y, avg; 
    cin >> tc;

    while(tc--) {
        cin >> x >> y;
        avg = (x+y) / 2;

        if(avg%2 == 0) cout << "Sadia will be happy.\n";
        else cout << "Oops!\n";
    }

    return 0;
}

