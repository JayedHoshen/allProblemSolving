#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, n, i, c = 0;
    cin >> tc;

    for(i = 1; i <= tc; i++) {
        cin >> n;
        if(n%3 == 0) c++;
    }
    cout << c << "\n";

    return 0;
}