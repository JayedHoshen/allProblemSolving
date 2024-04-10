#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;

    while(tc--) {
        char s[101];
        int i;

        scanf(" %[^\n]", s);

        for(i = 0; s[i] != '\0'; i++) {
            if(s[i] >= 'A' && s[i] <= 'Z') printf("%d", (s[i] - 64));
        }
        cout << endl;
    }

    return 0;
}