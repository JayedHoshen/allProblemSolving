#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;

    while(tc--) {
        char ch[2], s[10001]; 
        int i, len, count = 0;
        
        scanf(" %[^\n] %s", s, ch);
        len = strlen(s);

        for(i = 0; i < len; i++) {
            if(s[i] == ch[0]) count++;
        }

        if(count == 0) printf("'%c' is not present\n", ch[0]);
        else printf("Occurrence of '%c' in '%s' = %d\n", ch[0], s, count);
    }

    return 0;
}