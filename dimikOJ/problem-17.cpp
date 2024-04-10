#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;

    while(tc--) {
        char ch[1001];
        int i, count = 0;

        scanf(" %[^\n]", ch);

        for(i = 0; i < strlen(ch); i++) {
            if(ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u') count++;
        }

        printf("Number of vowels = %d\n", count);
    }

    return 0;
}