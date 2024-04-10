#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;

    while(tc--) {
        char s[1001]; 
        int i, count[26];
        
        scanf(" %[^\n]", s);

        for(i = 0; i < 26; i++) count[i] = 0;

        for(i = 0; i < strlen(s); i++) {
            if(s[i] >= 'a' && s[i] <= 'z') count[s[i] - 'a']++;
        }

        for(i = 0; i < 26; i++) {
            if(count[i] != 0) printf("%c = %d\n", ('a'+i), count[i]);
        } 

        cout << endl;
    }

    return 0;
}