#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int len, bg = 0, sm = 0;

    cin >> s;
    len = s.size();

    for(int i = 0; i < len; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') bg++;
        if(s[i] >= 'a' && s[i] <= 'z') sm++;
    }
    cout << bg << " " << sm << endl;

    return 0;
}