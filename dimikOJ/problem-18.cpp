#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;

    while(tc--) {
        char ch[10001];
        int i;

        scanf(" %[^\n]", ch);

        for(i = 0; ch[i] != '\0'; i++) {
            if(ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u') printf("%c", ch[i]);
        }

        printf("\n");

        for(i = 0; ch[i] != '\0'; i++) {
            if(ch[i] != 'a' && ch[i] != 'e' && ch[i] != 'i' && ch[i] != 'o' && ch[i] != 'u' && ch[i] != ' ') printf("%c", ch[i]);
        }

        printf("\n");
    }

    return 0;
}