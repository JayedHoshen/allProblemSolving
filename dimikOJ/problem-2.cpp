#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    string s;

    cin >> tc;

    while(tc--) {
        cin >> s;
        int len = s.size();

        if(s[len-1] & 1) cout << "odd\n";
        else cout << "even\n";
    }

    return 0;
}