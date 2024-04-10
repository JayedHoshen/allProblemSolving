#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;

    while(tc--) {
        char s[10002], ss[10002];
        int count = 0;

        scanf(" %[^\n]", s);
        
        for(int i = 0; s[i] != '\0'; i++) {
            if(s[i] == ' ') count++;
        }
        cout << "Count = " << count+1 << endl;
    }

    return 0;
}