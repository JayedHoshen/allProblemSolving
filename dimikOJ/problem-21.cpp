#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;

    while(tc--) {
        char s[1001];
        int i;

        scanf(" %[^\n]", s);

        for(i = strlen(s) - 1; i >= 0; i--) {
            cout << s[i];
        }
        cout << endl;
    }

    return 0;
}