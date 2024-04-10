#include <bits/stdc++.h>
using namespace std;

void strReverse(char str[]);

int main()
{
    int tc; cin >> tc;

    while(tc--) {
        int i, j, k, s_len;
        char s[1002], word[1002];

        scanf(" %[^\n]", s);

        s_len = strlen(s);

        for(j = 0, k = 0; j < s_len; j++) {
            if(s[j] != ' ') {
                word[k] = s[j];
                k++;
            }
            else if(k > 0) {
                word[k] = '\0';
                strReverse(word);
                printf(" ");
                k = 0;
            }
        }
        if(k > 0) {
            word[k] = '\0';
            strReverse(word);
        }

        printf("\n");
    }

    return 0;
}

void strReverse(char str[]) {
    for(int i = strlen(str) - 1; i >= 0; i--) printf("%c", str[i]);
}