#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, n;
    cin >> tc;

    while (tc--) {
        cin >> n;
        if(n<0) n *= -1;
        cout << n << "\n";
    }

    return 0;
}